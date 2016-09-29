#-------------------------------------------------
#
# Project created by QtCreator 2016-09-21T20:55:06
#
#-------------------------------------------------

QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BT-Controller
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vprincipal.cpp \
    libbtcl.cpp \
    dlg_ncon.cpp

HEADERS  += mainwindow.h \
    vprincipal.h \
    ../../Descargas/ControladorCiber/Nueva carpeta/src/libbtcl.h \
    libbtcl.h \
    dlg_ncon.h

FORMS    += mainwindow.ui \
    vprincipal.ui \
    dlg_ncon.ui

RESOURCES += \
    images.qrc
