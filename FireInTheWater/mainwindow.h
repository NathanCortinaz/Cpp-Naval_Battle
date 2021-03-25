#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include "QMessageBox"
#include "tab.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    tab t;
    QUdpSocket* udpSocket;
    QUdpSocket* udpSocketServer;
    QHostAddress IP_Adversario;
    quint16 Porta_Adversario;

private slots:
    void on_pushEnviar_clicked();
    void recebeSinal();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
