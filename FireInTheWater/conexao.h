#ifndef CONEXAO_H
#define CONEXAO_H

#include "QUdpSocket"
#include "tabjogo.h"

class tab;
class MainWindow;

class conexao : public QObject
{
public:
    QHostAddress IP_Adversario;
    quint16 Porta_Adversario;
    QUdpSocket* udpSocket;
    QUdpSocket* udpSocketServer;
    conecta();
    void w_datagram(QString);
    void r_datagram(QByteArray*);
    void desconecta();
};

#endif // CONEXAO_H
