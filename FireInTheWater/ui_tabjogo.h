/********************************************************************************
** Form generated from reading UI file 'tabjogo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABJOGO_H
#define UI_TABJOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tabjogo
{
public:
    QWidget *centralwidget;
    QPushButton *pbAtirar;
    QTableWidget *meuMapa;
    QTableWidget *mapaAdversario;
    QPushButton *pbAbandonar;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *tabjogo)
    {
        if (tabjogo->objectName().isEmpty())
            tabjogo->setObjectName(QStringLiteral("tabjogo"));
        tabjogo->resize(667, 400);
        centralwidget = new QWidget(tabjogo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pbAtirar = new QPushButton(centralwidget);
        pbAtirar->setObjectName(QStringLiteral("pbAtirar"));
        pbAtirar->setGeometry(QRect(10, 362, 321, 31));
        meuMapa = new QTableWidget(centralwidget);
        if (meuMapa->columnCount() < 10)
            meuMapa->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        meuMapa->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (meuMapa->rowCount() < 10)
            meuMapa->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        meuMapa->setVerticalHeaderItem(7, __qtablewidgetitem17);
        meuMapa->setObjectName(QStringLiteral("meuMapa"));
        meuMapa->setGeometry(QRect(10, 30, 321, 321));
        meuMapa->setMouseTracking(false);
        meuMapa->setFrameShape(QFrame::StyledPanel);
        meuMapa->setFrameShadow(QFrame::Sunken);
        meuMapa->setMidLineWidth(0);
        meuMapa->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        meuMapa->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        meuMapa->setProperty("showDropIndicator", QVariant(true));
        meuMapa->setDragEnabled(false);
        meuMapa->setGridStyle(Qt::DashLine);
        meuMapa->setSortingEnabled(false);
        meuMapa->setRowCount(10);
        meuMapa->horizontalHeader()->setCascadingSectionResizes(false);
        meuMapa->horizontalHeader()->setDefaultSectionSize(30);
        meuMapa->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        meuMapa->horizontalHeader()->setStretchLastSection(false);
        meuMapa->verticalHeader()->setCascadingSectionResizes(false);
        meuMapa->verticalHeader()->setDefaultSectionSize(30);
        mapaAdversario = new QTableWidget(centralwidget);
        if (mapaAdversario->columnCount() < 10)
            mapaAdversario->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(7, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(8, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        mapaAdversario->setHorizontalHeaderItem(9, __qtablewidgetitem27);
        if (mapaAdversario->rowCount() < 10)
            mapaAdversario->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(6, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        mapaAdversario->setVerticalHeaderItem(7, __qtablewidgetitem35);
        mapaAdversario->setObjectName(QStringLiteral("mapaAdversario"));
        mapaAdversario->setGeometry(QRect(340, 30, 321, 321));
        mapaAdversario->setMouseTracking(false);
        mapaAdversario->setFrameShape(QFrame::StyledPanel);
        mapaAdversario->setFrameShadow(QFrame::Sunken);
        mapaAdversario->setMidLineWidth(0);
        mapaAdversario->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mapaAdversario->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mapaAdversario->setProperty("showDropIndicator", QVariant(true));
        mapaAdversario->setDragEnabled(false);
        mapaAdversario->setGridStyle(Qt::DashLine);
        mapaAdversario->setSortingEnabled(false);
        mapaAdversario->setRowCount(10);
        mapaAdversario->horizontalHeader()->setCascadingSectionResizes(false);
        mapaAdversario->horizontalHeader()->setDefaultSectionSize(30);
        mapaAdversario->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        mapaAdversario->horizontalHeader()->setStretchLastSection(false);
        mapaAdversario->verticalHeader()->setCascadingSectionResizes(false);
        mapaAdversario->verticalHeader()->setDefaultSectionSize(30);
        pbAbandonar = new QPushButton(centralwidget);
        pbAbandonar->setObjectName(QStringLiteral("pbAbandonar"));
        pbAbandonar->setGeometry(QRect(340, 362, 321, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 321, 16));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 10, 321, 16));
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setAlignment(Qt::AlignCenter);
        tabjogo->setCentralWidget(centralwidget);

        retranslateUi(tabjogo);

        QMetaObject::connectSlotsByName(tabjogo);
    } // setupUi

    void retranslateUi(QMainWindow *tabjogo)
    {
        tabjogo->setWindowTitle(QApplication::translate("tabjogo", "Burning Seas", Q_NULLPTR));
        pbAtirar->setText(QApplication::translate("tabjogo", "Atirar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = meuMapa->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tabjogo", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = meuMapa->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tabjogo", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = meuMapa->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tabjogo", "C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = meuMapa->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tabjogo", "D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = meuMapa->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("tabjogo", "E", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = meuMapa->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("tabjogo", "F", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = meuMapa->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("tabjogo", "G", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = meuMapa->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("tabjogo", "H", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = meuMapa->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("tabjogo", "I", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = meuMapa->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("tabjogo", "J", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = meuMapa->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("tabjogo", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = meuMapa->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("tabjogo", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = meuMapa->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("tabjogo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = meuMapa->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("tabjogo", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = meuMapa->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("tabjogo", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = meuMapa->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("tabjogo", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = meuMapa->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("tabjogo", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = meuMapa->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("tabjogo", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = mapaAdversario->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("tabjogo", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = mapaAdversario->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("tabjogo", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = mapaAdversario->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("tabjogo", "C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = mapaAdversario->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("tabjogo", "D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = mapaAdversario->horizontalHeaderItem(4);
        ___qtablewidgetitem22->setText(QApplication::translate("tabjogo", "E", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = mapaAdversario->horizontalHeaderItem(5);
        ___qtablewidgetitem23->setText(QApplication::translate("tabjogo", "F", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = mapaAdversario->horizontalHeaderItem(6);
        ___qtablewidgetitem24->setText(QApplication::translate("tabjogo", "G", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = mapaAdversario->horizontalHeaderItem(7);
        ___qtablewidgetitem25->setText(QApplication::translate("tabjogo", "H", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = mapaAdversario->horizontalHeaderItem(8);
        ___qtablewidgetitem26->setText(QApplication::translate("tabjogo", "I", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = mapaAdversario->horizontalHeaderItem(9);
        ___qtablewidgetitem27->setText(QApplication::translate("tabjogo", "J", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = mapaAdversario->verticalHeaderItem(0);
        ___qtablewidgetitem28->setText(QApplication::translate("tabjogo", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = mapaAdversario->verticalHeaderItem(1);
        ___qtablewidgetitem29->setText(QApplication::translate("tabjogo", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = mapaAdversario->verticalHeaderItem(2);
        ___qtablewidgetitem30->setText(QApplication::translate("tabjogo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = mapaAdversario->verticalHeaderItem(3);
        ___qtablewidgetitem31->setText(QApplication::translate("tabjogo", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = mapaAdversario->verticalHeaderItem(4);
        ___qtablewidgetitem32->setText(QApplication::translate("tabjogo", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = mapaAdversario->verticalHeaderItem(5);
        ___qtablewidgetitem33->setText(QApplication::translate("tabjogo", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = mapaAdversario->verticalHeaderItem(6);
        ___qtablewidgetitem34->setText(QApplication::translate("tabjogo", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = mapaAdversario->verticalHeaderItem(7);
        ___qtablewidgetitem35->setText(QApplication::translate("tabjogo", "8", Q_NULLPTR));
        pbAbandonar->setText(QApplication::translate("tabjogo", "Abandonar partida", Q_NULLPTR));
        label->setText(QApplication::translate("tabjogo", "MEU MAPA", Q_NULLPTR));
        label_2->setText(QApplication::translate("tabjogo", "ADVERS\303\201RIO", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tabjogo: public Ui_tabjogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABJOGO_H
