#-------------------------------------------------
#
# Project created by QtCreator 2019-06-02T20:05:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proe_pro2
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

CONFIG += c++11

SOURCES += \
        ../../PROBA_pro2/PROBA_pro2/Akumulator.cpp \
        ../../PROBA_pro2/PROBA_pro2/Dron.cpp \
        ../../PROBA_pro2/PROBA_pro2/Obudowa.cpp \
        ../../PROBA_pro2/PROBA_pro2/Pojazdy.cpp \
        ../../PROBA_pro2/PROBA_pro2/PojazdyLadowe.cpp \
        ../../PROBA_pro2/PROBA_pro2/PojazdyPowietrzne.cpp \
        ../../PROBA_pro2/PROBA_pro2/Silnik.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        ../../PROBA_pro2/PROBA_pro2/Akumulator.hpp \
        ../../PROBA_pro2/PROBA_pro2/Dron.hpp \
        ../../PROBA_pro2/PROBA_pro2/Obudowa.hpp \
        ../../PROBA_pro2/PROBA_pro2/Pojazdy.hpp \
        ../../PROBA_pro2/PROBA_pro2/PojazdyLadowe.hpp \
        ../../PROBA_pro2/PROBA_pro2/PojazdyPowietrzne.hpp \
        ../../PROBA_pro2/PROBA_pro2/Silnik.hpp \
        mainwindow.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
