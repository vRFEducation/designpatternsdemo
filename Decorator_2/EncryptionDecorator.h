#ifndef ENCRYPTIONDECORATOR_H
#define ENCRYPTIONDECORATOR_H

#include "DataSourceDecorator.h"

class EncryptionDecorator : public DataSourceDecorator
{
public:
    EncryptionDecorator(DataSource *source);

    // DataSource interface
public:
    void writeData(QString data);
    QString readData();
};

#endif // ENCRYPTIONDECORATOR_H
