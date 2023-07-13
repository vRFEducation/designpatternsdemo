#ifndef NOTIFIER_H
#define NOTIFIER_H

#include "INotifier.h"

class Notifier : public INotifier
{
public:
    Notifier();

    // INotifier interface
public:
    QString sendMessage(QString message);
};

#endif // NOTIFIER_H
