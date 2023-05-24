#include "server.h"
#include <QDataStream>
Server::Server()
{
    if(this->listen(QHostAddress("192.168.1.65"), 2323))
    {
        qDebug() << "start";
    }
    else
    {
        qDebug() << "failed!";
    }
}

void Server::SendToClient(QString str)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_15);
    out << str;
    for(int i = 0; i < Sockets.size();i++)
        Sockets[i]->write(Data);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead,this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);

    Sockets.push_back(socket);

    qDebug() << "Client " << socketDescriptor << " connected!";
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);                 //с помощью объекта in работаем с данными находящимися в сокете
    in.setVersion(QDataStream::Qt_5_15);
    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "read..";
        QString str;
        in >> str;
        qDebug() << str;
        SendToClient(str);
    }
    else
    {
        qDebug() << "DataStream error...";
    }

}
