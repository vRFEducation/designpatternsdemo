#include "Notifier.h"

Notifier::Notifier()
{

}

QString Notifier::sendMessage(QString message)
{
    return "Base Notifier(E-Mail): " + message;
}
