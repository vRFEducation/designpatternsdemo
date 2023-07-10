#include "StockClassAdapter.h"

StockClassAdapter::StockClassAdapter()
{

}

QString StockClassAdapter::getInformation(QString stockCode)
{
    auto id = stockCode.right(2).toInt() * 10;
    return getDetails(id);

}
