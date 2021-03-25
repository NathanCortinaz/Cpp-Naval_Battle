#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    udpSocket = new QUdpSocket(this);
    udpSocketServer = new QUdpSocket(this);
    connect(udpSocketServer, SIGNAL(readyRead()), this, SLOT(recebeSinal()));
    udpSocketServer->bind(QHostAddress::AnyIPv4, 4242);
    Porta_Adversario = 4242;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recebeSinal()
{
    QByteArray buffer;
    quint16 y;
    buffer.resize(udpSocketServer->pendingDatagramSize());
    udpSocketServer->readDatagram(buffer.data(), buffer.size(), &IP_Adversario, &y);
    this->close();
    QMessageBox::about(this, "Primeira embarcação", "Defina a posição do barco 2x1.");
    udpSocket->close();
    udpSocketServer->close();
    t.setIPPort(IP_Adversario, Porta_Adversario);
    t.show();
}


void MainWindow::on_pushEnviar_clicked()
{
    IP_Adversario.setAddress(ui->lineIP->text());
    Porta_Adversario = ui->linePortaEnvia->text().toUInt();
    this->close();
    QByteArray data;
    data.append("placeholder");
    udpSocket->writeDatagram(data, IP_Adversario, Porta_Adversario);
    QMessageBox::about(this, "Primeira embarcação", "Defina a posição do barco 2x1.");
    this->close();
    udpSocket->close();
    udpSocketServer->close();
    t.setIPPort(IP_Adversario, Porta_Adversario);
    t.show();
}
