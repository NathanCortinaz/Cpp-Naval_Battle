/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QPushButton *pushEnviar;
    QLineEdit *linePortaEnvia;
    QLabel *label_3;
    QLineEdit *lineIP;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(159, 151);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 41, 71, 16));
        pushEnviar = new QPushButton(centralWidget);
        pushEnviar->setObjectName(QStringLiteral("pushEnviar"));
        pushEnviar->setGeometry(QRect(10, 100, 141, 41));
        linePortaEnvia = new QLineEdit(centralWidget);
        linePortaEnvia->setObjectName(QStringLiteral("linePortaEnvia"));
        linePortaEnvia->setGeometry(QRect(60, 70, 91, 20));
        linePortaEnvia->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 47, 21));
        lineIP = new QLineEdit(centralWidget);
        lineIP->setObjectName(QStringLiteral("lineIP"));
        lineIP->setGeometry(QRect(30, 40, 121, 20));
        lineIP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 141, 16));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Burning Seas", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "IP:", Q_NULLPTR));
        pushEnviar->setText(QApplication::translate("MainWindow", "INICIAR JOGO", Q_NULLPTR));
        linePortaEnvia->setText(QApplication::translate("MainWindow", "4242", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PORTA:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "ENDERE\303\207O DO ADVERS\303\201RIO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
