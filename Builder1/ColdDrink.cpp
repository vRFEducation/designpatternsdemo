
#include "ColdDrink.h"

ColdDrink::ColdDrink()
{

}

Packing *ColdDrink::packing()
{
    return new BottlePacking();
}
