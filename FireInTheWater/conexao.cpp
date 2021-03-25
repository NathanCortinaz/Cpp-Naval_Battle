#include "conexao.h"


conexao::conecta()
{
    udpSocket = new QUdpSocket(this);
    udpSocketServer = new QUdpSocket(this);
    udpSocketServer->bind(QHostAddress::AnyIPv4, 4242);
    connect(udpSocketServer, SIGNAL(readyRead()), this, SLOT(escolha_estado()));
}


void conexao::desconecta()
{

}

void conexao::w_datagram(QString str)
{
    QByteArray data;
    data.append(str);
    udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
}

void conexao::r_datagram(QByteArray *buffer)
{
    quint16 y;
    buffer->resize(udpSocketServer->pendingDatagramSize());
    udpSocketServer->readDatagram(buffer->data(), buffer->size(), &IP_Adversario, &y);
}
