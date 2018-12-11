//
// Created by nick on 07.12.18.
//

#include "RoadBarrier.h"

void RoadBarrier::WallCollision() {
    if(position.x <=100){
        position.x = 100;
        speed.y/=0.8;
    }
}
