//
// Created by nick on 04.12.18.
//

#ifndef ROADFIGHTER_ENEMY_H
#define ROADFIGHTER_ENEMY_H


#include <vector>
#include "Car.h"

class EnemyCar: public Car {
public:
    EnemyCar() = default;
    ~EnemyCar() = default;
    virtual void render() = 0;
    void goDown(float deltatime);
    bool OnCollision(std::shared_ptr<Entity> other);

protected:

    float speeding;
    float totaltime;
};


#endif //ROADFIGHTER_ENEMY_H
