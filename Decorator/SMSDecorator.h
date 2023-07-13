#ifndef SMSDECORATOR_H
#define SMSDECORATOR_H

#include "BaseDecorator.h"

class SMSDecorator : public BaseDecorator
{
public:
    SMSDecorator(INotifier *wrappee);


    // INotifier interface
public:
    QString sendMessage(QString message);

private:
    QString sendSMS(QString message);
};

#endif // SMSDECORATOR_H
