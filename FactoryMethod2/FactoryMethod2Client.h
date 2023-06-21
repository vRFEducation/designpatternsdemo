#ifndef FACTORYMETHOD2CLIENT_H
#define FACTORYMETHOD2CLIENT_H

#include "Creator.h"
#include "LaptopCreator.h"
#include "MobileCreator.h"


class FactoryMethod2Client
{
public:
    FactoryMethod2Client();

    void handleProduct(Creator *creator);
};

#endif // FACTORYMETHOD2CLIENT_H
