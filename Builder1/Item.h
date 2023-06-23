#ifndef ITEM_H
#define ITEM_H

#include "Packing.h"

#include <QString>



class Item
{
public:
    Item();
    virtual QString name() = 0;
    virtual Packing *packing() = 0;
    virtual float price() = 0;
};

#endif // ITEM_H
