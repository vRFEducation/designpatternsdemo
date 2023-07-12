#ifndef PROXYINTERNET_H
#define PROXYINTERNET_H

#include "Internet.h"
#include "RealInternet.h"
#include <QMap>
#include <QStringList>

class ProxyInternet : public Internet
{
public:
    ProxyInternet();

    // Internet interface
public:
    QString connectTo(QString url);

private:
    RealInternet *_realService;
    QStringList _bannedSite;

    QMap<QString, QString> _cacheList;
};

#endif // PROXYINTERNET_H
