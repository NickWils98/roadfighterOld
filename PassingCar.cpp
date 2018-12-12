//
// Created by nick on 12.12.18.
//

#include "PassingCar.h"

void PassingCar::goDown(float deltaTime) {
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


bool PassingCar::OnCollision(std::shared_ptr<Entity> other) {
    coordinats direction = other->getHit();
    coordinats& sp = other->getSpeed();
    const coordinats hard = other->getHardness();
    if(direction.x < 0.0f){
        //Collision on the left.
        speed.x = speed.x*hard.x;
    } else if(direction.x > 0.0f){
        //Collision on the right.
        speed.x = speed.x*hard.x;
    }
    if(direction.y < 0.0f){
        //Collision on the top.
        float diff = speed.y+sp.y;
        if(hardness.y<hard.y) {
            speed.y = diff *(hard.y-hardness.y)/2;
            sp.y = diff/2;
        } else if(hardness.y> hard.y) {
            sp.y = diff *(hardness.y-hard.y)/2;
            speed.y = diff/2;
        } else{
            speed.y = diff /2;
            sp.y = diff*0.9/2;
        }



    } else if(direction.y > 0.0f){
        //Collision on the bottom.
        float diff = speed.y+sp.y;
        if(hardness.y>hard.y) {
            speed.y = diff *(hard.y-hardness.y)/2;
            sp.y = diff/2;
        } else if(hardness.y< hard.y) {
            sp.y = diff *(hardness.y-hard.y)/2;
            speed.y = diff/2;
        } else{
            speed.y = diff *0.9/2;
            sp.y = diff/2;
        }
    }
    return false;
}
