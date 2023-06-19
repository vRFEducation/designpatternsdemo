#include "CarFactory.h"
#include "BaseCar.h"
#include "FactoryMethodClient.h"

#include <QString>

FactoryMethodClient::FactoryMethodClient()
{
    auto car = CarFactory::createCar("B");
    if (car != nullptr) {
        car->drive();
    }
    foo();
    bar();
}

void FactoryMethodClient::foo()
{
    auto car = CarFactory::createCar("F");

    if (car != nullptr) {
        car->drive();
    }
}

void FactoryMethodClient::bar()
{
    auto car = CarFactory::createCar("RR");

    if (car != nullptr) {
        car->drive();
    }
}
