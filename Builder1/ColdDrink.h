#ifndef COLDDRINK_H
#define COLDDRINK_H

#include "Item.h"
#include "BottlePacking.h"

class ColdDrink : public Item
{
public:
    ColdDrink();

    // Item interface
public:
    Packing *packing();
};

#endif // COLDDRINK_H
