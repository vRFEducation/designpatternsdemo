#ifndef SYSTEMFACADE_H
#define SYSTEMFACADE_H

#include "Battery.h"
#include "CoolingSystem.h"
#include "Engine.h"

class SystemFacade
{
public:
    SystemFacade();
    bool turnOn();
};

#endif // SYSTEMFACADE_H
