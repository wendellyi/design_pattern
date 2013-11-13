#ifndef CLIENT_H
#define CLIENT_H

#include "StrategyPattern.h"

class FlyWithWings: public FlyBehavior
{
public:
    virtual void fly()
    {
        std::cout << "I'm flying" << std::endl;
    }
};

class FlyNoWay: public FlyBehavior
{
public:
    virtual void fly()
    {
        std::cout << "I can't fly" << std::endl;
    }
};

class Quack: public QuackBehavior
{
public:
    virtual void quack()
    {
        std::cout << "Quack" << std::endl;
    }
};

class MuteQuack: public QuackBehavior
{
public:
    virtual void quack()
    {
        std::cout << "Silence" << std::endl;
    }
};

class Squack: public QuackBehavior
{
public:
    virtual void quack()
    {
        std::cout << "Squark" << std::endl;
    }
};

////////////////////////////////////////////////////////////////////////
class MiniDuckSimulator: public Duck
{
public:
    MiniDuckSimulator()
    {
        _flyBehavior = new FlyWithWings;
        _quackBehavior = new Squack;
    }
};

class LargeDuckSimulator: public Duck
{
public:
    LargeDuckSimulator()
    {
        _flyBehavior = new FlyNoWay;
        _quackBehavior = new MuteQuack;
    }
};


#endif // CLIENT_H
