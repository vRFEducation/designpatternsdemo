#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
public:
    Component();

    virtual void add(Component *newCompnent){}
    virtual void remove(Component *newCompnent){}

    virtual bool isComposite();

    virtual float price() = 0;

    Component *parent() const;
    void setParent(Component *newParent);

protected:
    Component *_parent;

};

#endif // COMPONENT_H
