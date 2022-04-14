#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>


class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

signals:

public slots:
    void newConnection();

private:
    QTcpServer *server;
};



#endif // SERVER_H
