#ifndef STRATEGYPATTERN_H
#define STRATEGYPATTERN_H

#include <iostream>

class FlyBehavior
{
public:
    virtual void fly() = 0;
};

class QuackBehavior
{
public:
    virtual void quack() = 0;
};

// 隔离的鸭子本身和它的行为，当然一些绝对不会变化的
// 行为也是会被包含进入Duck类本身的。

class Duck
{
public:
    Duck(): _flyBehavior(0), _quackBehavior(0) {}
    void setFlyBehavior(FlyBehavior* flyBehavior)
    {
        _flyBehavior = flyBehavior;
    }

    void setQuackBehavior(QuackBehavior* quackBehavior)
    {
        _quackBehavior = quackBehavior;
    }

    void performFly()
    {
        _flyBehavior->fly();
    }

    void performQuack()
    {
        _quackBehavior->quack();
    }

    void swim()
    {
        std::cout << "All ducks float, even decoys" << std::endl;
    }

protected:
    FlyBehavior* _flyBehavior;
    QuackBehavior* _quackBehavior;
};

#endif // STRATEGYPATTERN_H
