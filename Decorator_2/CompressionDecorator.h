#ifndef COMPRESSIONDECORATOR_H
#define COMPRESSIONDECORATOR_H

#include "DataSourceDecorator.h"

class CompressionDecorator : public DataSourceDecorator
{
public:
    CompressionDecorator(DataSource *source);

    // DataSource interface
public:
    void writeData(QString data);
    QString readData();
};

#endif // COMPRESSIONDECORATOR_H
