TEMPLATE = app
TARGET = Hello_world

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    main2.cpp \
    main3.cpp \
    window.cpp

HEADERS += \
    window.h
