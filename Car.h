//
// Created by nick on 04.12.18.
//

#ifndef ROADFIGHTER_CAR_H
#define ROADFIGHTER_CAR_H


#include "Entity.h"

class Car: public Entity {
public:
    virtual ~Car();

    Car();

    void WallCollision() override;
    float acceler;
    float maxspeed;

};


#endif //ROADFIGHTER_CAR_H
