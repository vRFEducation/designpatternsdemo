#include "House.h"

House::House()
{

}

void House::setBasement(QString str)
{
    this->_basement = str;
}

void House::setStructure(QString str)
{
    this->_structure = str;
}

void House::setRoof(QString str)
{
    this->_roof = str;
}

void House::setInterior(QString str)
{
    this->_interior = str;
}

QString House::describe()
{
    return QString("%0 -- %1 -- %2 -- %3")
            .arg(_basement)
            .arg(_structure)
            .arg(_roof)
            .arg(_interior);
}
