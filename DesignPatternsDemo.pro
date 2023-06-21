QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    FactoryMethod1/BMW.cpp \
    FactoryMethod1/BaseCar.cpp \
    FactoryMethod1/CarFactory.cpp \
    FactoryMethod1/FactoryMethodClient.cpp \
    FactoryMethod1/Ford.cpp \
    FactoryMethod1/Honda.cpp \
    FactoryMethod2/Creator.cpp \
    FactoryMethod2/FactoryMethod2Client.cpp \
    FactoryMethod2/Laptop.cpp \
    FactoryMethod2/LaptopCreator.cpp \
    FactoryMethod2/Mobile.cpp \
    FactoryMethod2/MobileCreator.cpp \
    FactoryMethod2/Product.cpp \
    Singleton/Logger.cpp \
    Singleton/SingletonAnotherDialog.cpp \
    Singleton/SingletonDemoDialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    FactoryMethod1/BMW.h \
    FactoryMethod1/BaseCar.h \
    FactoryMethod1/CarFactory.h \
    FactoryMethod1/FactoryMethodClient.h \
    FactoryMethod1/Ford.h \
    FactoryMethod1/Honda.h \
    FactoryMethod2/Creator.h \
    FactoryMethod2/FactoryMethod2Client.h \
    FactoryMethod2/Laptop.h \
    FactoryMethod2/LaptopCreator.h \
    FactoryMethod2/Mobile.h \
    FactoryMethod2/MobileCreator.h \
    FactoryMethod2/Product.h \
    Singleton/Logger.h \
    Singleton/SingletonAnotherDialog.h \
    Singleton/SingletonDemoDialog.h \
    mainwindow.h

FORMS += \
    Singleton/SingletonAnotherDialog.ui \
    Singleton/SingletonDemoDialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
