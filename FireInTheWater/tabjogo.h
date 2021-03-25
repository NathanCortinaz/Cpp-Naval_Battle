#ifndef TABJOGO_H
#define TABJOGO_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTableWidget>
#include <QTableWidgetSelectionRange>
#include "afacfrota.h"
#include "bfacfrota.h"

class MainWindow;

namespace Ui {
class tabjogo;
}

class tabjogo : public QMainWindow
{
    Q_OBJECT

public:
    explicit tabjogo(QWidget *parent = 0);
    ~tabjogo();
    bool flag;
    int minhas_coordenadas[28];
    int coordenadas_adversario[28];
    QList<QTableWidgetSelectionRange> lista;
    QUdpSocket* udpSocket;
    QUdpSocket* udpSocketServer;
    QHostAddress IP_Adversario;
    quint16 Porta_Adversario;
    void setIPPort(QHostAddress, quint16);
    void set_tab();
    int acabouA = 0;
    int acabouB = 0;

private slots:
    void on_pbAtirar_clicked();
    void recebeSinal();
    void on_pbAbandonar_clicked();

private:
    Ui::tabjogo *ui;
};

#endif // TABJOGO_H
