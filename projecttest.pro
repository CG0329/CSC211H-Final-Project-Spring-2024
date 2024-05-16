QT       += core gui \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    anxiety.cpp \
    bmccinfo.cpp \
    depression.cpp \
    gamehome.cpp \
    main.cpp \
    mainwindow.cpp \
    mentalhealthissue.cpp \
    publicinfo.cpp \
    secdialog.cpp \
    signup.cpp \
    stress.cpp

HEADERS += \
    account.h \
    anxiety.h \
    bmccinfo.h \
    depression.h \
    gamehome.h \
    mainwindow.h \
    mentalhealthissue.h \
    publicinfo.h \
    secdialog.h \
    signup.h \
    stress.h

FORMS += \
    bmccinfo.ui \
    gamehome.ui \
    mainwindow.ui \
    publicinfo.ui \
    secdialog.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    passwords.txt \
    usernames.txt
