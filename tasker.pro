#-------------------------------------------------
#
# Project created by QtCreator 2016-11-29T17:02:47
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tasker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    taskform.cpp \
    connectform.cpp

HEADERS  += mainwindow.h \
    taskform.h \
    connectform.h

FORMS    += mainwindow.ui \
    taskform.ui \
    connectform.ui
