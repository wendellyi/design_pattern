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

// �����Ѽ�ӱ����������Ϊ����ȻһЩ���Բ���仯��
// ��ΪҲ�ǻᱻ��������Duck�౾��ġ�

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
