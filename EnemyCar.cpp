//
// Created by nick on 04.12.18.
//

#include "EnemyCar.h"

void EnemyCar::goDown(float deltaTime) {
    if(speed.y>0){
        speed.y -= acceler*deltaTime*20;
    }else {
        speed.y -= acceler*deltaTime;
    }
    if(-maxspeed>speed.y){
        speed.y = -maxspeed;
    }
    position.y += speed.y;
}

