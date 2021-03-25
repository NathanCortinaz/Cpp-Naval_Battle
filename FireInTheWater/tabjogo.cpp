#include "mainwindow.h"
#include "tabjogo.h"
#include "ui_tabjogo.h"

tabjogo::tabjogo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tabjogo)
{
    ui->setupUi(this);
}

tabjogo::~tabjogo()
{
    delete ui;
}

void tabjogo::on_pbAtirar_clicked()
{
    if(flag == true)
    {
        lista.append(ui->mapaAdversario->selectedRanges());
        if(lista.last().topRow() - lista.last().bottomRow() != 0 ||
                lista.last().rightColumn() - lista.last().leftColumn()!= 0)
        {
            QMessageBox::about(this,"Aviso","Favor selecionar um alvo válido! (1x1)");
            return;
        }
        QTableWidgetSelectionRange sel = lista.last();
        int xl = sel.leftColumn(), yt = sel.topRow();
        QByteArray data;
        data.append(QString::number(xl) + "," + QString::number(yt));
//        QMessageBox::about(this,"Aviso",QString::number(xl) + "," + QString::number(yt));
        udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
        udpSocket->close();
    }
    else QMessageBox::about(this, "Aviso", "Aguarde o turno do seu adversário.");
}

void tabjogo::on_pbAbandonar_clicked()
{
    MainWindow w;
    QMessageBox msgBox;
    msgBox.setWindowTitle("Abandonar Partida");
    msgBox.setText("Deseja abandonar a partida?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Ok:
        this->close();
        break;
    case QMessageBox::Cancel:
        msgBox.close();
        break;
    }
}

void tabjogo::recebeSinal()
{
    if(flag == false)
    {
        //Envia resposta do tiro recebido
        QByteArray buffer;
        QByteArray data;
//        QMessageBox::about(this,"Aviso","Resposta sendo enviada!");
        buffer.resize(udpSocketServer->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        udpSocketServer->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
        QString str = buffer;
        int xl = str.section(",",0,0).toInt();
        int yt = str.section(",",1,1).toInt();
        flag = true;
        for(int i = 0; i < 28; i++)
        {
            if(yt == minhas_coordenadas[i] && xl == minhas_coordenadas[i+1])
            {
                data.append("1");
                udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
                ui->meuMapa->item(yt, xl)->setBackground(Qt::red);
                QMessageBox::about(this, "Cuidado!", "Você tomou um tiro!");
                acabouB++;
                if(acabouB == 14)
                {
                    QMessageBox::about(this, "Fim de jogo!", "Você perdeu!");
                    this->close();
                }
                return;
            }
            i++;
        }
        data.append("0");
        udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
        ui->meuMapa->setItem(yt, xl, new QTableWidgetItem);
        ui->meuMapa->item(yt,xl)->setBackground(Qt::blue);
        QMessageBox::about(this, "Água!", "Seu inimigo errou!");
    }
    else
    {
        //Recebendo a resposta do tiro enviado.
//        QMessageBox::about(this,"Aviso","Resposta recebida!");
        QTableWidgetSelectionRange sel = lista.last();
        int xl = sel.leftColumn(), yt = sel.topRow();
        QByteArray buffer;
        buffer.resize(udpSocketServer->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        udpSocketServer->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
//        QMessageBox::about(this,"Aviso",QString::number(xl) + "," + QString::number(yt));
        int hit = QString(buffer).toInt();
        if(hit == 1)
        {
            ui->mapaAdversario->setItem(yt, xl, new QTableWidgetItem);
            ui->mapaAdversario->item(yt, xl)->setBackground(Qt::red);
            acabouA++;
            QMessageBox::about(this, "Fogo!", "Belo tiro!");
            if(acabouA == 14)
            {
                QMessageBox::about(this, "Parabéns!", "Você venceu!");
                this->close();
            }
        }
        else
        {
            QMessageBox::about(this, "Água!", "Você errou!");
            ui->mapaAdversario->setItem(yt, xl, new QTableWidgetItem);
            ui->mapaAdversario->item(yt, xl)->setBackground(Qt::blue);
        }
        flag = false;
    }
}

void tabjogo::set_tab()
{
    for(int i = 0; i < 28; i++)
    {
        ui->meuMapa->setItem(minhas_coordenadas[i], minhas_coordenadas[i+1], new QTableWidgetItem);
        ui->meuMapa->item(minhas_coordenadas[i], minhas_coordenadas[i+1])->setBackground(Qt::green);
        i++;
    }
}

void tabjogo::setIPPort(QHostAddress IP, quint16 Port)
{

    IP_Adversario = IP;
    Porta_Adversario = Port;
    udpSocket = new QUdpSocket(this);
    udpSocketServer = new QUdpSocket(this);
    connect(udpSocketServer, SIGNAL(readyRead()), this, SLOT(recebeSinal()));
    udpSocketServer->bind(QHostAddress::AnyIPv4, Porta_Adversario);
}
