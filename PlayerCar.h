//
// Created by nick on 04.12.18.
//

#ifndef ROADFIGHTER_PLAYERCAR_H
#define ROADFIGHTER_PLAYERCAR_H

#include <vector>
#include "Car.h"

class PlayerCar: public Car {
public:
    PlayerCar() = default;
    ~PlayerCar() = default;
    virtual void render() = 0;
    void Update(float deltaTime, std::vector<bool> input);
    virtual std::vector<bool> getInput() = 0;
    float getSpeed();

protected:
    float maxspeed;
    float totaltime;

    unsigned int row;
    bool faceRight;

    bool canJump;
    float jumpHeight;
    float velocityX;
    float velocityY;

};


#endif //ROADFIGHTER_PLAYERCAR_H
