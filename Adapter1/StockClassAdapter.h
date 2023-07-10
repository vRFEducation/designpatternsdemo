#ifndef STOCKCLASSADAPTER_H
#define STOCKCLASSADAPTER_H

#include "AdvancedStockAnalyzer.h"
#include "StockInformation.h"

class StockClassAdapter : public StockInformation, public AdvancedStockAnalyzer
{
public:
    StockClassAdapter();
    QString getInformation(QString stockCode) override;

};

#endif // STOCKCLASSADAPTER_H
