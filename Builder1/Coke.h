#ifndef COKE_H
#define COKE_H

#include "ColdDrink.h"

class Coke : public ColdDrink
{
public:
    Coke();

    // Item interface
public:
    QString name();
    float price();
};

#endif // COKE_H
