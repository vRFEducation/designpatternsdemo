#ifndef REALINTERNET_H
#define REALINTERNET_H

#include "Internet.h"

class RealInternet : public Internet
{
public:
    RealInternet();

    // Internet interface
public:
    QString connectTo(QString url);
};

#endif // REALINTERNET_H
