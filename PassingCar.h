//
// Created by nick on 12.12.18.
//

#ifndef ROADFIGHTER_PASSINGCAR_H
#define ROADFIGHTER_PASSINGCAR_H


#include "Car.h"

class PassingCar : public Car {
public:
    PassingCar() = default;
    ~PassingCar() = default;
    virtual void render() = 0;
    void goDown(float deltatime);
    bool OnCollision(std::shared_ptr<Entity> other);

protected:

    float speeding;
    float totaltime;
};


#endif //ROADFIGHTER_PASSINGCAR_H
