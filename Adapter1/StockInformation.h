#ifndef STOCKINFORMATION_H
#define STOCKINFORMATION_H

#include <QString>



class StockInformation
{
public:
    StockInformation();
    virtual QString getInformation(QString stockCode);
};

#endif // STOCKINFORMATION_H
