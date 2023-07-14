#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QString>



class DataSource
{
public:
    DataSource();

    virtual void writeData(QString data) = 0;
    virtual QString readData() = 0;
};

#endif // DATASOURCE_H
