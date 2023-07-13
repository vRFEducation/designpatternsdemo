#ifndef BASEDECORATOR_H
#define BASEDECORATOR_H

#include "INotifier.h"

class BaseDecorator : public INotifier
{
public:
    BaseDecorator(INotifier *wrappee);

private:
    INotifier *_wrappee;

    // INotifier interface
public:
    QString sendMessage(QString message);
};

#endif // BASEDECORATOR_H
