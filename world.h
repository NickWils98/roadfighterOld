//
// Created by nick on 20.11.18.
//

#ifndef ROADFIGHTER_WORLD_H
#define ROADFIGHTER_WORLD_H


#include <vector>
#include "Game.h"
#include "Car.h"

class world: public Game {
public:
    world();
    virtual ~world();

    Car addCar();
};


#endif //ROADFIGHTER_WORLD_H
