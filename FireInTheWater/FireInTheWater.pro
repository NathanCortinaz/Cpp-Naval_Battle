#-------------------------------------------------
#
# Project created by QtCreator 2019-11-06T18:12:27
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FireInTheWater
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    contratorpedeiro.cpp \
    faccontratorpedeiro.cpp \
    facnaviostanque.cpp \
    facportaavioes.cpp \
    facsubmarino.cpp \
    main.cpp \
    mainwindow.cpp \
    navio.cpp \
    naviostanque.cpp \
    portaavioes.cpp \
    submarino.cpp \
    tab.cpp \
    tabjogo.cpp \
    afacfrota.cpp \
    bfacfrota.cpp \
    conexao.cpp \
    coordenadas.cpp

HEADERS += \
    contratorpedeiro.h \
    faccontratorpedeiro.h \
    facnaviostanque.h \
    facportaavioes.h \
    facsubmarino.h \
    mainwindow.h \
    navio.h \
    naviostanque.h \
    portaavioes.h \
    submarino.h \
    tab.h \
    tabjogo.h \
    ui_mainwindow.h \
    ui_tab.h \
    ui_tabjogo.h \
    afacfrota.h \
    bfacfrota.h \
    conexao.h \
    coordenadas.h

FORMS += \
