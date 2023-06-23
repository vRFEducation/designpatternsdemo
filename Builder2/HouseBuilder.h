#ifndef HOUSEBUILDER_H
#define HOUSEBUILDER_H

#include "House.h"



class HouseBuilder
{
public:
    HouseBuilder();

    virtual void buildBasement() = 0;
    virtual void buildStructure() = 0;
    virtual void buildRoof() = 0;
    virtual void buildInterior() = 0;
    virtual void construct() = 0;

    virtual House * getHouse() = 0;
};

#endif // HOUSEBUILDER_H
