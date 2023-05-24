#include "server.h"

Server::Server()
{
    int port = 2323;
    QString ipadd = "localhsot";
    if(this->listen(QHostAddress(ipadd), port))
    {
        qDebug() << "start on ip: " + ipadd + " " + QString::number(port);
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
    out.setVersion(QDataStream::Qt_6_2);
    out << str;
    for(int i = 0; i < Sockets.size();i++)
        Sockets[i]->write(Data);
}
void Server::SendToClient(QString str,int i)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out << str;
    Sockets[i]->write(Data);
}




void Server::allocationPlayer()
{
    //int player = (rand() % 2 +1); // диапазон равен от 1 до 2 включительно

    SendToClient("You first", 0);
    SendToClient("You Second",1);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead,this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);

    Sockets.push_back(socket);

    qDebug() << "Client " << socketDescriptor << " connected!";

    if(Sockets.size() > 1)
        allocationPlayer();
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);                 //с помощью объекта in работаем с данными находящимися в сокете
    in.setVersion(QDataStream::Qt_6_2);
    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "read..";
        QString str;
        in >> str;
        qDebug() << str;
        for(int i = 0; i <Sockets.size() ;i++)
            if(socket!=Sockets.at(i))
                SendToClient(str, i);
    }
    else
    {
        qDebug() << "DataStream error...";
    }

}
