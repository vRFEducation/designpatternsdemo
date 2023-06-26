#include "Box.h"

Box::Box()
{

}

void Box::add(Component *newCompnent)
{
    _children.append(newCompnent);
    newCompnent->setParent(this);
}

void Box::remove(Component *newCompnent)
{
    _children.removeOne(newCompnent);
    newCompnent->setParent(nullptr);
}

bool Box::isComposite()
{
    return true;
}

float Box::price()
{
    float sum = 0;
    foreach (auto child, _children) {
        sum += child->price();
    }
    return sum;
}
