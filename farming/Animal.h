#ifndef ANIMAL_H
#define ANIMAL_H
#include <QApplication>


#pragma once
class Animal {
public:
    virtual void sound() = 0;
    virtual int getCost() = 0;
    virtual int getEarnings() = 0;
    virtual void produce() = 0;
    virtual bool isReadyToCollect() = 0;
    virtual void update() = 0;
    Animal() {
        qDebug() << "Animal constructed!";
    }
    virtual ~Animal() {
        qDebug() << "Animal destructed!";
    }
protected:
    int productionTime = 20; // seconds
    int timeToProduction = productionTime;
};

class Cow : public Animal {
public:
    void sound() override {
        qDebug() << "Moo!";
    }
    int getCost() override {
        return 1000;
    }
    int getEarnings() override {
        return 500;
    }
    void produce() override {
        qDebug() << "Milk produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Cow() {
        qDebug() << "Cow constructed!";
    }
    ~Cow() {
        qDebug() << "Cow destructed!";
    }
};

class Lomb : public Animal {
public:
    void sound() override {
        qDebug() << "Baa!";
    }
    int getCost() override {
        return 800;
    }
    int getEarnings() override {
        return 400;
    }
    void produce() override {
        qDebug() << "Wool produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Lomb() {
        qDebug() << "Lomb constructed!";
    }
    ~Lomb() {
        qDebug() << "Lomb destructed!";
    }
};

class Chicken : public Animal {
public:
    void sound() override {
        qDebug() << "Cluck!";
    }
    int getCost() override {
        return 200;
    }
    int getEarnings() override {
        return 100;
    }
    void produce() override {
        qDebug() << "Egg produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Chicken() {
        qDebug() << "Chicken constructed!";
    }
    ~Chicken() {
        qDebug() << "Chicken destructed!";
    }
};



#endif // ANIMAL_H
