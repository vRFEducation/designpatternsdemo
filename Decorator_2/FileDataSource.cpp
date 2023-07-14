#include "FileDataSource.h"
#include <qdebug.h>

FileDataSource::FileDataSource(QString fileName)
    :_fileName(fileName)
{
    _file = new QFile(fileName);
    _file->open(QFile::ReadWrite);
}

FileDataSource::~FileDataSource()
{
    _file->close();
    delete _file;
}

void FileDataSource::writeData(QString data)
{
    qDebug() << data;
    _file->write(data.toUtf8());
    _file->flush();
}

QString FileDataSource::readData()
{
    _file->seek(0);
    return QString(_file->readAll());
}
