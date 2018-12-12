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

    virtual bool OnCollision(std::shared_ptr<Entity> other) = 0;
    void WallCollision() override;
    float acceler;
    float maxspeed;

};


#endif //ROADFIGHTER_CAR_H
