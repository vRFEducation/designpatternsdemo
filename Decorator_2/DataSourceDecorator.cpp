#include "DataSourceDecorator.h"

DataSourceDecorator::DataSourceDecorator(DataSource *source)
    :_wrappee(source)
{

}

void DataSourceDecorator::writeData(QString data)
{
    _wrappee->writeData(data);
}

QString DataSourceDecorator::readData()
{
    return _wrappee->readData();
}
