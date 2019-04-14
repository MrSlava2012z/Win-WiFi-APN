#Win WiFi APN
#Win_WiFi_APN.pro
#Котов Святослав Павлович, 30.07.2017
#C++
#Qt 5.9.0
#MinGW 5.3.0 32 bit
#IBM-866

QT       += core
QT       -= gui
TARGET    = Win_WiFi_APN
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += c++11
TEMPLATE  = app
SOURCES  += main.cpp \
            Win_WiFi_APN.cpp
HEADERS  += Win_WiFi_APN.h
