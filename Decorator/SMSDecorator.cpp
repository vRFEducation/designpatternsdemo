#include "SMSDecorator.h"

SMSDecorator::SMSDecorator(INotifier *wrappee)
    :BaseDecorator(wrappee)
{

}

QString SMSDecorator::sendMessage(QString message)
{
    QString result;
    result = BaseDecorator::sendMessage(message);
    result.append("\n");
    result.append(sendSMS(message));
    return result;
}

QString SMSDecorator::sendSMS(QString message)
{
    return "SMS Sent: " + message;
}
