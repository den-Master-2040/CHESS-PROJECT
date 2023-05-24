#include "client.h"

Client::Client(){}
Client::~Client(){}

Client::Client(QString ipAddres, int port)
    : ipAddres(ipAddres), port(port)
{
    socket = new QTcpSocket();
    connect(socket, &QTcpSocket::readyRead, this, &Client::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

}


void Client::connectToServer()
{
    socket->connectToHost(ipAddres, port);
}

void Client::SendToServer(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);
    out << str;
    socket->write(Data);
}

void Client::SendToServer(int arr[8][8])
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);
    out << arr;
    socket->write(Data);
}

QString Client::getStatusConnectToServer()
{
    if(socket->state() == QTcpSocket::ConnectedState)
        Status = "Connected!";
    else
        Status = "Fail connected...";
    return Status;
}

void Client::getMessageFromServer()
{

        QDataStream in(socket);
        in.setVersion(QDataStream::Qt_5_15);
        if(in.status() == QDataStream::Ok)
            in >>str;
        else
            Status = "Error read";
}

void Client::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_5_15);
    if(in.status() == QDataStream::Ok)    
        in >>str;    
    else
        Status = "Error read";
    qDebug() << str;
    signalReadyRead();
}

