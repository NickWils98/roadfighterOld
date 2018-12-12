//
// Created by nick on 04.12.18.
//

#ifndef ROADFIGHTER_PLAYERCAR_H
#define ROADFIGHTER_PLAYERCAR_H

#include <vector>
#include "Car.h"
#include "BulletSFML.h"

class PlayerCar: public Car {
public:
    PlayerCar() = default;
    ~PlayerCar() = default;
    virtual void render() = 0;
    void Update(float deltaTime, std::vector<bool> input);
    virtual std::vector<bool> getInput() = 0;
    float getSpeed();
    void fire();
    bool OnCollision(std::shared_ptr<Entity> other);

protected:
    float totaltime;

    unsigned int row;
    bool faceRight;

    bool canJump;
    float jumpHeight;
    float velocityX;
    float velocityY;
    std::shared_ptr<Bullet> bullet= nullptr;

};


#endif //ROADFIGHTER_PLAYERCAR_H
