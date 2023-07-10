#ifndef STOCKADAPTER_H
#define STOCKADAPTER_H

#include "AdvancedStockAnalyzer.h"
#include "StockInformation.h"

class StockAdapter : public StockInformation
{
public:
    StockAdapter();
    QString getInformation(QString stockCode) override;

private:

    AdvancedStockAnalyzer *_service;
};

#endif // STOCKADAPTER_H
