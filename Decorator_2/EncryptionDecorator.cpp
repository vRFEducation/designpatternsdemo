#include "EncryptionDecorator.h"

EncryptionDecorator::EncryptionDecorator(DataSource *source)
    :DataSourceDecorator(source)
{

}

void EncryptionDecorator::writeData(QString data)
{
    data = data + "-ENC";
    DataSourceDecorator::writeData(data);

}

QString EncryptionDecorator::readData()
{
    auto data = DataSourceDecorator::readData();
    data = data.replace("-ENC", "");
    return data;

}

