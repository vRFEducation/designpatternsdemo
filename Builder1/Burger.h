#ifndef BURGER_H
#define BURGER_H

#include "Item.h"
#include "WrapperPacking.h"

class Burger : public Item
{
public:
    Burger();

    // Item interface
public:
    Packing *packing();
};

#endif // BURGER_H
