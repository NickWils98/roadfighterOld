//
// Created by nick on 04.12.18.
//

#include <iostream>
#include "EnemyCar.h"

void EnemyCar::goDown(float deltaTime) {
    if(-maxspeed>speed.y){
        speed.y += deltaTime*3;
    } else if(speed.y>0){
        speed.y -= acceler*deltaTime*20;
    }else {
        speed.y -= acceler*deltaTime;
    }

    position.y += speed.y;
    //std::cout<<speed.y<<std::endl;
}

