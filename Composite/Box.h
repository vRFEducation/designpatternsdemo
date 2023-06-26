#ifndef BOX_H
#define BOX_H

#include "Component.h"

#include <QList>

class Box : public Component
{
public:
    Box();

    // Component interface
public:
    void add(Component *newCompnent);
    void remove(Component *newCompnent);
    bool isComposite();
    float price();
private:
    QList<Component *> _children;
};

#endif // BOX_H
