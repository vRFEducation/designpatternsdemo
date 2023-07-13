#include "SlackDecorator.h"

SlackDecorator::SlackDecorator(INotifier *wrappee)
    :BaseDecorator(wrappee)
{

}

QString SlackDecorator::sendMessage(QString message)
{
    QString result;
    result = BaseDecorator::sendMessage(message);
    result.append("\n");
    result.append(sendSlackMessage(message));
    return result;

}

QString SlackDecorator::sendSlackMessage(QString message)
{
    return "Slack Message Sent: " + message;

}
