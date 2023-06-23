#ifndef HOUSE_H
#define HOUSE_H

#include "HousePlan.h"

class House : public HousePlan
{
public:
    House();

    // HousePlan interface
public:
    void setBasement(QString str);
    void setStructure(QString str);
    void setRoof(QString str);
    void setInterior(QString str);
    QString describe();
private:
    QString _basement;
    QString _structure;
    QString _roof;
    QString _interior;
};

#endif // HOUSE_H
