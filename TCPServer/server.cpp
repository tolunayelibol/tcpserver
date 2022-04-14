#include "server.h"

Server::Server(QObject *parent)
    : QObject{parent}
{

    server = new QTcpServer(this);
    connect (server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    if (!server->listen(QHostAddress::Any,1234))
    {
        qDebug() <<"Server henuz baslamadi!";
    }
    else
    {
        qDebug() <<"Server Basladi";

    }

}
 void Server::newConnection()
 {
 QTcpSocket *socket = server->nextPendingConnection();

 socket->write("hosgeldiniz\r\n");
 socket->flush();
 socket->waitForBytesWritten(3000);
 socket->close();
 }
