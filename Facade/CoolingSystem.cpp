#include "CoolingSystem.h"

#include <qDebug>

CoolingSystem::CoolingSystem()
{

}

bool CoolingSystem::openWaterGate()
{
    qDebug() << "Water Gate Openned...";
    return true;
}
