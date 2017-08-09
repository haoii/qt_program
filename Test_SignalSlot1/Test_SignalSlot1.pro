QT += core
QT -= gui

CONFIG += c++11

TARGET = Test_SignalSlot1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    newspaper.h \
    reader.h
