#ifndef LOGGER_H
#define LOGGER_H

#include <QFile>
#include <QString>



class Logger
{
public:
    static Logger *instance();

    void log(QString message);

    ~Logger();
private:
    QFile *_logFile;



    Logger();
};

#endif // LOGGER_H
