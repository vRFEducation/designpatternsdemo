#include "Engine.h"

#include <qDebug>

Engine::Engine()
{

}

bool Engine::start()
{
    qDebug() << "Engine Started...";
    return true;
}
