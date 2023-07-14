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
    Adapter1/Adapter1DemoDialog.cpp \
    Adapter1/AdvancedStockAnalyzer.cpp \
    Adapter1/StockAdapter.cpp \
    Adapter1/StockClassAdapter.cpp \
    Adapter1/StockInformation.cpp \
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
    Builder2/Builder2DemoDialog.cpp \
    Builder2/CivilEngineer.cpp \
    Builder2/House.cpp \
    Builder2/HouseBuilder.cpp \
    Builder2/HousePlan.cpp \
    Builder2/IglooHouseBuilder.cpp \
    Builder2/TipiHouseBuilder.cpp \
    Composite/Box.cpp \
    Composite/Component.cpp \
    Composite/CompositDemoDialog.cpp \
    Composite/ProductLeaf.cpp \
    Decorator/BaseDecorator.cpp \
    Decorator/DecoratorDemoDialog.cpp \
    Decorator/FacebookDecorator.cpp \
    Decorator/INotifier.cpp \
    Decorator/Notifier.cpp \
    Decorator/SMSDecorator.cpp \
    Decorator/SlackDecorator.cpp \
    Decorator_2/CompressionDecorator.cpp \
    Decorator_2/DataSource.cpp \
    Decorator_2/DataSourceDecorator.cpp \
    Decorator_2/Descorator2DemoDialog.cpp \
    Decorator_2/EncryptionDecorator.cpp \
    Decorator_2/FileDataSource.cpp \
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
    Proxy/Internet.cpp \
    Proxy/ProxyDemoDialog.cpp \
    Proxy/ProxyInternet.cpp \
    Proxy/RealInternet.cpp \
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
    Adapter1/Adapter1DemoDialog.h \
    Adapter1/AdvancedStockAnalyzer.h \
    Adapter1/StockAdapter.h \
    Adapter1/StockClassAdapter.h \
    Adapter1/StockInformation.h \
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
    Builder2/Builder2DemoDialog.h \
    Builder2/CivilEngineer.h \
    Builder2/House.h \
    Builder2/HouseBuilder.h \
    Builder2/HousePlan.h \
    Builder2/IglooHouseBuilder.h \
    Builder2/TipiHouseBuilder.h \
    Composite/Box.h \
    Composite/Component.h \
    Composite/CompositDemoDialog.h \
    Composite/ProductLeaf.h \
    Decorator/BaseDecorator.h \
    Decorator/DecoratorDemoDialog.h \
    Decorator/FacebookDecorator.h \
    Decorator/INotifier.h \
    Decorator/Notifier.h \
    Decorator/SMSDecorator.h \
    Decorator/SlackDecorator.h \
    Decorator_2/CompressionDecorator.h \
    Decorator_2/DataSource.h \
    Decorator_2/DataSourceDecorator.h \
    Decorator_2/Descorator2DemoDialog.h \
    Decorator_2/EncryptionDecorator.h \
    Decorator_2/FileDataSource.h \
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
    Proxy/Internet.h \
    Proxy/ProxyDemoDialog.h \
    Proxy/ProxyInternet.h \
    Proxy/RealInternet.h \
    Singleton/Logger.h \
    Singleton/SingletonAnotherDialog.h \
    Singleton/SingletonDemoDialog.h \
    mainwindow.h

FORMS += \
    AbstractFactory/AbstractFactioryDemoDialog.ui \
    Adapter1/Adapter1DemoDialog.ui \
    Builder1/Builder1DemoDialog.ui \
    Builder2/Builder2DemoDialog.ui \
    Composite/CompositDemoDialog.ui \
    Decorator/DecoratorDemoDialog.ui \
    Decorator_2/Descorator2DemoDialog.ui \
    Proxy/ProxyDemoDialog.ui \
    Singleton/SingletonAnotherDialog.ui \
    Singleton/SingletonDemoDialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
