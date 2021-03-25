/********************************************************************************
** Form generated from reading UI file 'tab.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_H
#define UI_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tab
{
public:
    QWidget *centralwidget;
    QPushButton *pbOK;
    QTableWidget *mapa;

    void setupUi(QMainWindow *tab)
    {
        if (tab->objectName().isEmpty())
            tab->setObjectName(QStringLiteral("tab"));
        tab->resize(340, 382);
        centralwidget = new QWidget(tab);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pbOK = new QPushButton(centralwidget);
        pbOK->setObjectName(QStringLiteral("pbOK"));
        pbOK->setGeometry(QRect(10, 342, 321, 31));
        mapa = new QTableWidget(centralwidget);
        if (mapa->columnCount() < 10)
            mapa->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        mapa->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (mapa->rowCount() < 10)
            mapa->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        mapa->setVerticalHeaderItem(7, __qtablewidgetitem17);
        mapa->setObjectName(QStringLiteral("mapa"));
        mapa->setGeometry(QRect(10, 10, 321, 321));
        mapa->setMouseTracking(false);
        mapa->setFrameShape(QFrame::StyledPanel);
        mapa->setFrameShadow(QFrame::Sunken);
        mapa->setMidLineWidth(0);
        mapa->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mapa->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mapa->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mapa->setProperty("showDropIndicator", QVariant(true));
        mapa->setDragEnabled(false);
        mapa->setShowGrid(true);
        mapa->setGridStyle(Qt::DashLine);
        mapa->setSortingEnabled(false);
        mapa->setCornerButtonEnabled(true);
        mapa->setRowCount(10);
        mapa->horizontalHeader()->setVisible(true);
        mapa->horizontalHeader()->setCascadingSectionResizes(false);
        mapa->horizontalHeader()->setDefaultSectionSize(30);
        mapa->horizontalHeader()->setHighlightSections(true);
        mapa->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        mapa->horizontalHeader()->setStretchLastSection(false);
        mapa->verticalHeader()->setCascadingSectionResizes(false);
        mapa->verticalHeader()->setDefaultSectionSize(30);
        tab->setCentralWidget(centralwidget);

        retranslateUi(tab);

        QMetaObject::connectSlotsByName(tab);
    } // setupUi

    void retranslateUi(QMainWindow *tab)
    {
        tab->setWindowTitle(QApplication::translate("tab", "Meu Mapa", Q_NULLPTR));
        pbOK->setText(QApplication::translate("tab", "OK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = mapa->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("tab", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = mapa->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("tab", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = mapa->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("tab", "C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = mapa->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("tab", "D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = mapa->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("tab", "E", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = mapa->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("tab", "F", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = mapa->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("tab", "G", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = mapa->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("tab", "H", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = mapa->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("tab", "I", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = mapa->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("tab", "K", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = mapa->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("tab", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = mapa->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("tab", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = mapa->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("tab", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = mapa->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("tab", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = mapa->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("tab", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = mapa->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("tab", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = mapa->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("tab", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = mapa->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("tab", "8", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tab: public Ui_tab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_H
