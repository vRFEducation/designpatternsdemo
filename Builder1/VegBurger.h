#ifndef VEGBURGER_H
#define VEGBURGER_H

#include "Burger.h"

class VegBurger : public Burger
{
public:
    VegBurger();

    // Item interface
public:
    QString name();
    float price();
};

#endif // VEGBURGER_H
