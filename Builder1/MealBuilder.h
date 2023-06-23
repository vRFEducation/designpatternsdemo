#ifndef MEALBUILDER_H
#define MEALBUILDER_H

#include "Meal.h"
#include "ChickenBurger.h"
#include "Coke.h"
#include "Pepsi.h"
#include "VegBurger.h"



class MealBuilder
{
public:
    MealBuilder();
    Meal *prepareVegMeal();
    Meal *prepareNonVegMeal();
};

#endif // MEALBUILDER_H
