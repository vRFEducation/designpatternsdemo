QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AbstractFactory/AbstractFactioryDemoDialog.cpp \
    AbstractFactory/FactoryProducer.cpp \
    AbstractFactory/NormalShapeFactory.cpp \
    AbstractFactory/Rectangle.cpp \
    AbstractFactory/RoundedRectangle.cpp \
    AbstractFactory/RoundedShapeFactory.cpp \
    AbstractFactory/RoundedSquare.cpp \
    AbstractFactory/RoundedTriangle.cpp \
    AbstractFactory/Shape.cpp \
    AbstractFactory/ShapeFactory.cpp \
    AbstractFactory/Square.cpp \
    AbstractFactory/Triangle.cpp \
    Builder1/BottlePacking.cpp \
    Builder1/Builder1DemoDialog.cpp \
    Builder1/Burger.cpp \
    Builder1/ChickenBurger.cpp \
    Builder1/Coke.cpp \
    Builder1/ColdDrink.cpp \
    Builder1/Item.cpp \
    Builder1/Meal.cpp \
    Builder1/MealBuilder.cpp \
    Builder1/Packing.cpp \
    Builder1/Pepsi.cpp \
    Builder1/VegBurger.cpp \
    Builder1/WrapperPacking.cpp \
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
    AbstractFactory/AbstractFactioryDemoDialog.h \
    AbstractFactory/FactoryProducer.h \
    AbstractFactory/NormalShapeFactory.h \
    AbstractFactory/Rectangle.h \
    AbstractFactory/RoundedRectangle.h \
    AbstractFactory/RoundedShapeFactory.h \
    AbstractFactory/RoundedSquare.h \
    AbstractFactory/RoundedTriangle.h \
    AbstractFactory/Shape.h \
    AbstractFactory/ShapeFactory.h \
    AbstractFactory/Square.h \
    AbstractFactory/Triangle.h \
    Builder1/BottlePacking.h \
    Builder1/Builder1DemoDialog.h \
    Builder1/Burger.h \
    Builder1/ChickenBurger.h \
    Builder1/Coke.h \
    Builder1/ColdDrink.h \
    Builder1/Item.h \
    Builder1/Meal.h \
    Builder1/MealBuilder.h \
    Builder1/Packing.h \
    Builder1/Pepsi.h \
    Builder1/VegBurger.h \
    Builder1/WrapperPacking.h \
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
    AbstractFactory/AbstractFactioryDemoDialog.ui \
    Builder1/Builder1DemoDialog.ui \
    Singleton/SingletonAnotherDialog.ui \
    Singleton/SingletonDemoDialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
