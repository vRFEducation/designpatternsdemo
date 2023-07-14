#include "Battery.h"

#include <qDebug>

Battery::Battery()
{

}

bool Battery::start()
{
    qDebug() << "Battery Started...";
    return false;
}
