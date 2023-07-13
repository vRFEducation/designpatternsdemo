#include "BaseDecorator.h"

BaseDecorator::BaseDecorator(INotifier *wrappee)
    :_wrappee(wrappee)
{

}

QString BaseDecorator::sendMessage(QString message)
{
    return _wrappee->sendMessage(message);
}
