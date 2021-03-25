#include "tab.h"
#include "ui_tab.h"
#include "coordenadas.h"

tab::tab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tab)
{
    ui->setupUi(this);
}

tab::~tab()
{
    delete ui;
}



int tab::checagem(int i)
{
    lista.append(ui->mapa->selectedRanges());
    QTableWidgetSelectionRange selecao = lista.last();
    int linhaA = selecao.topRow();
    int colunaA = selecao.leftColumn();
    int linhaB = selecao.bottomRow();
    int colunaB = selecao.rightColumn();

    //QMessageBox::about(this, "Debug", QString("T = %1, B = %2, L = %3, R = %4").arg(linhaA).arg(linhaB).arg(colunaA).arg(colunaB));

    if(linhaB - linhaA == 0)
    {
        if(colunaB - colunaA == i)
        {
            for(int x = colunaA; x < colunaB + 1; x++)
            {
                ui->mapa->setItem(linhaA, x, new QTableWidgetItem);
                ui->mapa->item(linhaA, x)->setBackground(Qt::green);
            }
            if(i < 4)
                QMessageBox::about(this, "Próxima Embarcação", QString("Defina a posição do barco %1x1.").arg(i+2));
        }
        else
        {
            i--;
            QMessageBox::about(this, "Erro", QString("Selecione %1 casas para o barco.").arg(i+2));
            lista.removeAt(lista.count()-1);
        }
    }
    else if(colunaB - colunaA == 0)
    {
        if(linhaB - linhaA == i)
        {
            for(int x = linhaA; x < linhaB + 1; x++)
            {
                ui->mapa->setItem(x, colunaA, new QTableWidgetItem);
                ui->mapa->item(x, colunaA)->setBackground(Qt::green);
            }
            if(i < 4)
            {
                QMessageBox::about(this, "Próxima embarcação.", QString("Defina a posição do barco %1x1.").arg(i+2));
            }
        }
        else
        {
            i--;
            QMessageBox::about(this, "Erro", QString("Selecione %1 casas para o barco.").arg(i+2));
            lista.removeAt(lista.count()-1);
        }
    }
    else
    {
        i--;
        QMessageBox::about(this, "Erro", QString("Selecione apenas %1 casas para o barco.").arg(i+2));
        lista.removeAt(lista.count()-1);
    }
    //QMessageBox::about(this, "Coordenadas", QString("(%1, %2)\n(%3, %4)").arg(linhaA).arg(colunaA).arg(linhaB).arg(colunaB));
    return i;
}

void tab::on_pbOK_clicked()
{
    QByteArray data;
    switch(i)
    {
    case 0:
    {
        i = checagem(i+1);
        break;
    }
    case 1:
    {
        i = checagem(i+1);
        break;
    }
    case 2:
    {
        i = checagem(i+1);
        break;
    }
    case 3:
    {
        i = checagem(i+1);
        if(i == 4)
        {
            if(flag_envia == false)
            {
                coordenadas coord;
                coord.converte(lista,j.minhas_coordenadas);
                flag_envia = true;
                for (int k = 0; k < 28; k++) data.append(QString(j.minhas_coordenadas[k]) + ",");
                udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
            }

            if(flag_recebe == false) QMessageBox::about(this,"Aviso","Aguardando adversário.");
            else
            {
                udpSocketServer->close();
                udpSocket->close();
                j.show();
                j.setIPPort(IP_Adversario, Porta_Adversario);
                j.set_tab();
                j.flag = true;
                this->close();
            }
        }
        break;
    }
    }
}

void tab::recebeSinal()
{
    flag_recebe = true;
    QByteArray buffer;
    buffer.resize(udpSocketServer->pendingDatagramSize());
    QHostAddress sender;
    quint16 senderPort;
    udpSocketServer->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    QString str = buffer;
    for(int i = 0; i < 28; i++)
    {
        j.coordenadas_adversario[i] = str.section(",",i,i).toInt();
    }



    if(flag_envia == true)
    {
        udpSocketServer->close();
        udpSocket->close();
        j.show();
        j.flag = false;
        j.setIPPort(IP_Adversario, Porta_Adversario);
        j.set_tab();
        this->close();
    }
}

void tab::setIPPort(QHostAddress IP, quint16 Port)
{
    IP_Adversario = IP;
    Porta_Adversario = Port;
    udpSocket = new QUdpSocket(this);
    udpSocketServer = new QUdpSocket(this);
    connect(udpSocketServer, SIGNAL(readyRead()), this, SLOT(recebeSinal()));
    udpSocketServer->bind(QHostAddress::AnyIPv4, Porta_Adversario);
}
