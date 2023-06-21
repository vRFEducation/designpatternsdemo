#ifndef LAPTOPCREATOR_H
#define LAPTOPCREATOR_H

#include "Creator.h"
#include "Laptop.h"

class LaptopCreator : public Creator
{
public:
    LaptopCreator();

    // Creator interface
public:
    Product *FactoryMethod();
};

#endif // LAPTOPCREATOR_H
