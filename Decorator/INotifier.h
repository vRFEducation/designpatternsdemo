#ifndef INOTIFIER_H
#define INOTIFIER_H

#include <QString>



class INotifier
{
public:
    INotifier();
    virtual QString sendMessage(QString message) = 0;
};

#endif // INOTIFIER_H
