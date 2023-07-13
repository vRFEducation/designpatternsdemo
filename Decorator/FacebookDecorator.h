#ifndef FACEBOOKDECORATOR_H
#define FACEBOOKDECORATOR_H

#include "BaseDecorator.h"

class FacebookDecorator : public BaseDecorator
{
public:
    FacebookDecorator(INotifier *wrappee);


    // INotifier interface
public:
    QString sendMessage(QString message);

private:
    QString sendFacebookMessage(QString message);
};

#endif // FACEBOOKDECORATOR_H
