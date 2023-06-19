#ifndef FORD_H
#define FORD_H

#include "BaseCar.h"



class Ford: public BaseCar
{
public:
    Ford();

    // BaseCar interface
public:
    void drive();
};

#endif // FORD_H
