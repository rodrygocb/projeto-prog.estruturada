QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    estrut_dados.cpp \
    main.cpp \
    prog_estrut.cpp \
    tela2.cpp \
    tela4.cpp \
    tela5.cpp \
    widget.cpp

HEADERS += \
    estrut_dados.h \
    prog_estrut.h \
    tela2.h \
    tela4.h \
    tela5.h \
    widget.h

FORMS += \
    estrut_dados.ui \
    prog_estrut.ui \
    tela2.ui \
    tela4.ui \
    tela5.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
