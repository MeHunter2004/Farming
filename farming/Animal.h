#ifndef ANIMAL_H
#define ANIMAL_H


#pragma once
//#include "user.h"
//#include "silo.h"
//#include "warehouse.h"
//#include <iostream>
//using namespace std;

class animal
{
protected:
    int capasity;
    int condition; // 1:hungry     2:grazing     3:ready    4:lock
    int Time;
public:
    void feed();
    void collect();
    void transfer(bool _decOrInc, int _number);
    int getCapasity();
    int getCondition();
    void check();

};



#endif // ANIMAL_H
