#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include "Burger.h"

class ChickenBurger : public Burger
{
public:
    ChickenBurger();

    // Item interface
public:
    QString name();
    float price();
};

#endif // CHICKENBURGER_H
