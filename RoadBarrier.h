//
// Created by nick on 07.12.18.
//

#ifndef ROADFIGHTER_ROADBARRIER_H
#define ROADFIGHTER_ROADBARRIER_H


#include "Entity.h"

class RoadBarrier : public Entity {
public:
    RoadBarrier() = default;
    ~RoadBarrier() = default;

    void WallCollision();

};


#endif //ROADFIGHTER_ROADBARRIER_H
