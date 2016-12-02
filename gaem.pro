TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    unit.cpp \
    knight.cpp \
    pickeman.cpp \
    peasant.cpp \
    kingdom.cpp \
    danger.cpp \
    plague.cpp \
    barbariansrush.cpp

HEADERS += \
    unit.h \
    knight.h \
    pickeman.h \
    peasant.h \
    kingdom.h \
    danger.h \
    plague.h \
    barbariansrush.h
