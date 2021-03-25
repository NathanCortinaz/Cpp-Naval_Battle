#include "mainwindow.h"
#include "tab.h"
#include "QMessageBox"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QMessageBox msgBox;
    msgBox.setWindowTitle("Olá");
    msgBox.setText("Seja bem-vindo ao Burning Seas! Clique OK para continuar.");
    msgBox.exec();
    w.show();

    return a.exec();
}
