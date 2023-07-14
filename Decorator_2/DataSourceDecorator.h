#ifndef DATASOURCEDECORATOR_H
#define DATASOURCEDECORATOR_H

#include "DataSource.h"

class DataSourceDecorator : public DataSource
{
public:
    DataSourceDecorator(DataSource *source);

private:
    DataSource *_wrappee;

    // DataSource interface
public:
    void writeData(QString data);
    QString readData();
};

#endif // DATASOURCEDECORATOR_H
