#include "duck.h"

void Duck::performFly() {
    if (flyBehavior) flyBehavior->fly();
}

void Duck::performQuack() {
    if (quackBehavior) quackBehavior->quack();
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
    if (flyBehavior == fb) return;   
    delete flyBehavior;              
    flyBehavior = fb;                
}

void Duck::setQuackBehavior(QuackBehavior* qb) {
    if (quackBehavior == qb) return;
    delete quackBehavior;
    quackBehavior = qb;
}

MallardDuck::MallardDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}

RedheadDuck::RedheadDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}

RubberDuck::RubberDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new Squeak());
}

DecoyDuck::DecoyDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}

ModelDuck::ModelDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}
