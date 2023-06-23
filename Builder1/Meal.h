#ifndef MEAL_H
#define MEAL_H

#include "Item.h"

#include <QList>
#include <QDebug>



class Meal
{
public:
    Meal();

    void addItem(Item *newItem);
    float cost();
    void showItems();
private:
    QList<Item *> _items;
};

#endif // MEAL_H
