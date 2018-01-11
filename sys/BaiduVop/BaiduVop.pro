#-------------------------------------------------
#
# Project created by QtCreator 2015-05-03T14:35:16
#
#-------------------------------------------------

QT       += core gui network multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BaiduVop
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        MainWindow.cpp \
    JasonQt/JasonQt_Net.cpp \
    JasonQt/JasonQt_Vop.cpp

HEADERS  += MainWindow.h \
    JasonQt/JasonQt_Net.h \
    JasonQt/JasonQt_Vop.h

FORMS    += MainWindow.ui
