#include "client.h"

int main()
{
    Duck* duck;
    
    duck = new MiniDuckSimulator;
    duck->performFly();
    duck->performQuack();
    duck->swim();

    delete duck;

    duck = new LargeDuckSimulator;
    duck->performFly();
    duck->performQuack();
    duck->swim();
}