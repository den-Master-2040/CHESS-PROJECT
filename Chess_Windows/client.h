#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>


class Client : public QMainWindow
{
    Q_OBJECT
public:
    Client();
    Client(QString ipAddres, int port);
    ~Client();
    void connectToServer();
    void SendToServer(QString str);
    QString getStatusConnectToServer();
    QString str; //данные
    void getMessageFromServer();
private:

    QString ipAddres;
    int port;
    QByteArray Data;
    QTcpSocket *socket;
    QString Status;
public slots:
    void slotReadyRead();
public: signals:
    void signalReadyRead();
};

#endif // CLIENT_H
