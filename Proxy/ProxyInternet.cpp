#include "ProxyInternet.h"

ProxyInternet::ProxyInternet()
{
    _realService = new RealInternet();
    _bannedSite << "www.abc.com" << "www.def.com" << "www.xyz.com";
}

QString ProxyInternet::connectTo(QString url)
{
    url = url.toLower();
    if (_cacheList.contains(url)) {
        return _cacheList[url];
    }
    if (_bannedSite.contains(url)) {
        return "this site is banned";
    }
    _cacheList[url] = _realService->connectTo(url);
    return _cacheList[url];
}
