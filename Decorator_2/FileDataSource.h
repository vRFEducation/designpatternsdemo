#ifndef FILEDATASOURCE_H
#define FILEDATASOURCE_H

#include "DataSource.h"

#include <qfile.h>

class FileDataSource : public DataSource
{
public:
    FileDataSource(QString fileName);
    ~FileDataSource();
    // DataSource interface
public:
    void writeData(QString data);
    QString readData();
private:
    QString _fileName;
    QFile *_file;
};

#endif // FILEDATASOURCE_H
