// implementation.h
#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

class Implementation {
public:
    virtual ~Implementation() = default;
    virtual void Operation() const = 0;
};

class ConcreteImplementationA : public Implementation {
public:
    void Operation() const override;
};

#endif // IMPLEMENTATION_H

