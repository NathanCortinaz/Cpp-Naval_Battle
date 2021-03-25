#ifndef TAB_H
#define TAB_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTableWidgetSelectionRange>
#include "QMessageBox"
#include "tabjogo.h"

class MainWindow;

namespace Ui {
class tab;
}

class tab : public QMainWindow
{
    Q_OBJECT

public:
    explicit tab(QWidget *parent = 0);
    ~tab();
    int checagem(int i);
    tabjogo j;
    void setIPPort(QHostAddress, quint16);
    QList<QTableWidgetSelectionRange> lista;

private slots:
    void on_pbOK_clicked();
    void recebeSinal();


private:
    Ui::tab *ui;

    int i = 0;
    bool flag_envia = false;
    bool flag_recebe = false;
    QUdpSocket* udpSocket;
    QUdpSocket* udpSocketServer;
    QHostAddress IP_Adversario;
    quint16 Porta_Adversario;
};

#endif // TAB_H
