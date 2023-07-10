#include "StockAdapter.h"

StockAdapter::StockAdapter()
{
    _service = new AdvancedStockAnalyzer();
}

QString StockAdapter::getInformation(QString stockCode)
{
    auto id = stockCode.right(2).toInt();
    return _service->getDetails(id);
}
