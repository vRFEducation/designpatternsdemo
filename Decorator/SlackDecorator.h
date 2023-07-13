#ifndef SLACKDECORATOR_H
#define SLACKDECORATOR_H

#include "BaseDecorator.h"

class SlackDecorator : public BaseDecorator
{
public:
    SlackDecorator(INotifier *wrappee);

    // INotifier interface
public:
    QString sendMessage(QString message);

private:
    QString sendSlackMessage(QString message);
};

#endif // SLACKDECORATOR_H
