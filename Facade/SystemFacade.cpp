#include "SystemFacade.h"

SystemFacade::SystemFacade()
{

}

bool SystemFacade::turnOn()
{
    CoolingSystem cooling;
    Battery battery;
    Engine engine;

    auto isGateOpenned = cooling.openWaterGate();
    if(!isGateOpenned){
        return false;
    }
    auto isBatteryStarted = battery.start();
    if (!isBatteryStarted) {
        return false;
    }

    auto isEngineStarted = engine.start();
    if (!isEngineStarted) {
        return false;
    }

    return true;


}
