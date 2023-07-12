#include "RealInternet.h"

#include <QThread>

RealInternet::RealInternet()
{

}

QString RealInternet::connectTo(QString url)
{
    QThread::msleep(2000);
    return ("Connecting to " + url);
}
