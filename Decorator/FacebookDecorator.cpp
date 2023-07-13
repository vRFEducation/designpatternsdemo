#include "FacebookDecorator.h"

FacebookDecorator::FacebookDecorator(INotifier *wrappee):
    BaseDecorator(wrappee)
{

}

QString FacebookDecorator::sendMessage(QString message)
{
    QString result;
    result = BaseDecorator::sendMessage(message);
    result.append("\n");
    result.append(sendFacebookMessage(message));
    return result;

}

QString FacebookDecorator::sendFacebookMessage(QString message)
{
    return "Facebook Message Sent: " + message;

}
