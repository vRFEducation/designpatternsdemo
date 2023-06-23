#ifndef PEPSI_H
#define PEPSI_H

#include "ColdDrink.h"

class Pepsi : public ColdDrink
{
public:
    Pepsi();

    // Item interface
public:
    QString name();
    float price();
};

#endif // PEPSI_H
