#include "StockInformation.h"

StockInformation::StockInformation()
{

}

QString StockInformation::getInformation(QString stockCode)
{
    return QString ("Stock information for %0").arg(stockCode);
}
