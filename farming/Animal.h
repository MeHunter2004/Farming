#ifndef ANIMAL_H
#define ANIMAL_H
#include <QApplication>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QAudioOutput>

#pragma once

extern int beefCount, meetCount, chickenCount, wool, milk, egg, wheatCount, cornCount;
extern int cowCount, lombCount, henCount, workerCount;
extern int coins;
//QMediaPlayer* player = new QMediaPlayer;
//QAudioOutput* audioOutput = new QAudioOutput;

//////////////////////////////Animals//////////////////////////////
class Animal {
public:
    virtual void sound() = 0;
    virtual void collect() = 0;
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
        // player->setSource(QUrl::fromLocalFile(""));
        // player->setAudioOutput(audioOutput); // Set the volume (0-100)
        // player->play(); // Start playing the sound
    }
    int getCost() override {
        return 7;
    }
    int getEarnings() override {
        return 5;
    }
    void produce() override {
        qDebug() << "Milk produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void collect() override {
        milk++;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Cow() {
        qDebug() << "Cow constructed!";
        cowCount++;
    }
    ~Cow() {
        qDebug() << "Cow destructed!";
        beefCount++;
        cowCount--;
    }
};

class Lomb : public Animal {
public:
    void sound() override {
        qDebug() << "Baa!";
    }
    int getCost() override {
        return 5;
    }
    int getEarnings() override {
        return 3;
    }
    void produce() override {
        qDebug() << "Wool produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void collect() override {
        wool++;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Lomb() {
        qDebug() << "Lomb constructed!";
        lombCount++;
    }
    ~Lomb() {
        qDebug() << "Lomb destructed!";
        meetCount++;
        lombCount--;
    }
};

class Chicken : public Animal {
public:
    void sound() override {
        qDebug() << "Cluck!";
    }
    int getCost() override {
        return 3;
    }
    int getEarnings() override {
        return 3;
    }
    void produce() override {
        qDebug() << "Egg produced!";
        timeToProduction = productionTime;
    }
    bool isReadyToCollect() override {
        return timeToProduction == 0;
    }
    void collect() override {
        egg++;
    }
    void update() override {
        if (timeToProduction > 0) {
            timeToProduction--;
        }
    }
    Chicken() {
        qDebug() << "Chicken constructed!";
        henCount++;
    }
    ~Chicken() {
        qDebug() << "Chicken destructed!";
        chickenCount++;
        henCount--;
    }
};
//////////////////////////////Seeds//////////////////////////////
class Seed {
public:
    virtual int getCost() = 0;
    virtual int getEarnings() = 0;
    virtual void produce() = 0;
    virtual bool isReadyToCollect() = 0;
    virtual void update() = 0;
    Seed() {
        qDebug() << "Seed constructed!";
    }
    ~Seed() {
        qDebug() << "Seed destructed!";
    }
protected:
    int productionTime = 20; // seconds
    int timeToProduction = productionTime;
};

class Wheat : public Seed {
public:
    int getCost() override {
        return 3;
    }
    int getEarnings() override {
        return 3;
    }
    void produce() override {
        qDebug() << "Wheat produced!";
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
    Wheat() {
        qDebug() << "Seed constructed!";
        wheatCount++;

    }
    ~Wheat() {
        qDebug() << "Seed destructed!";
        cornCount--;
    }
};

class Corn : public Seed {
public:
    int getCost() override {
        return 3;
    }
    int getEarnings() override {
        return 3;
    }
    void produce() override {
        qDebug() << "Corn produced!";
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
    Corn() {
        qDebug() << "Corn constructed!";
        cornCount++;

    }
    ~Corn() {
        qDebug() << "Corn destructed!";
        cornCount--;
    }
};

#endif // ANIMAL_H
