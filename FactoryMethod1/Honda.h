#ifndef HONDA_H
#define HONDA_H

#include "BaseCar.h"



class Honda: public BaseCar
{
public:
    Honda();

    // BaseCar interface
public:
    void drive();
};

#endif // HONDA_H
