#ifndef BMW_H
#define BMW_H

#include "BaseCar.h"



class BMW: public BaseCar
{
public:
    BMW();

    // BaseCar interface
public:
    void drive();
};

#endif // BMW_H
