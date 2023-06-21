#include "FactoryMethod2Client.h"
#include "qdebug.h"

FactoryMethod2Client::FactoryMethod2Client()
{
    auto creator1 = new LaptopCreator();
    handleProduct(creator1);
    auto creator2 = new MobileCreator();
    handleProduct(creator2);

}

void FactoryMethod2Client::handleProduct( Creator *creator)
{
    qDebug() << creator->describe();
}
