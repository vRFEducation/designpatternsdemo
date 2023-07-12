#ifndef INTERNET_H
#define INTERNET_H

#include<QString>

class Internet
{
public:
    Internet();
    virtual QString connectTo(QString url) = 0;
};

#endif // INTERNET_H
