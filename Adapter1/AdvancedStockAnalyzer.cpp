#include "AdvancedStockAnalyzer.h"

AdvancedStockAnalyzer::AdvancedStockAnalyzer()
{

}

QString AdvancedStockAnalyzer::getDetails(int stockId)
{
    return QString("Details for %1\nValue: 100\nDate:2023").arg(stockId);
}
