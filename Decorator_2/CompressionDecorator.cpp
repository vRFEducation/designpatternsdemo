#include "CompressionDecorator.h"

CompressionDecorator::CompressionDecorator(DataSource *source)
    :DataSourceDecorator(source)
{

}

void CompressionDecorator::writeData(QString data)
{
    data = data + "-Compressed";
    DataSourceDecorator::writeData(data);
}

QString CompressionDecorator::readData()
{
    auto data = DataSourceDecorator::readData();
    data = data.replace("-Compressed", "");
    return data;
}
