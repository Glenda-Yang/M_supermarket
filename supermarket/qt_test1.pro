QT       += core gui

QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buy_good.cpp \
    good_add.cpp \
    logon.cpp \
    main.cpp \
    manager.cpp \
    signup.cpp \
    widget.cpp

HEADERS += \
    buy_good.h \
    good_add.h \
    logon.h \
    manager.h \
    signup.h \
    widget.h

FORMS += \
    buy_good.ui \
    good_add.ui \
    logon.ui \
    manager.ui \
    signup.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    add.qrc
