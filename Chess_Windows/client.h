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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    QString ipAddres;
    int port;
    QByteArray Data;
    void SendToServer(QString str);
public slots:
    void slotReadyRead();
};

#endif // CLIENT_H
