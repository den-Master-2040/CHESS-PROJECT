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
    void SendToServer(int arr[8][8]);
private:

    QString ipAddres;
    int port;
    QByteArray Data;
    QTcpSocket *socket;
    QString Status;
public slots:
    void slotReadyRead();

signals:
    void signalReadyRead();
};

#endif // CLIENT_H
