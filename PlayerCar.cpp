//
// Created by nick on 04.12.18.
//

#include <math.h>
#include <iostream>
#include "PlayerCar.h"

void PlayerCar::Update(float deltaTime, std::vector<bool> input) {

    if(!input[0] and !input[1]){
        if (speed.x>1){
            speed.x -= deltaTime*10;
        }
        else if (speed.x<-1){
            speed.x+=deltaTime*10;
        }
        else{
            speed.x = 0;
        }
    }
    if(!input[2] and !input[3]){
        if (speed.y >0.001){
            speed.y-=deltaTime*3;
        }
        else if (speed.y<-1){
            speed.y +=deltaTime*3;
        }
        else{
            speed.y = 0;
        }
    }
    if(input[0]){
        if(speed.x>0){
            speed.x -= acceler*deltaTime*20;
        }else {
            speed.x -= acceler*deltaTime;
        }
        if(-maxspeed>speed.x){
            speed.x = -maxspeed;
        }
    }
    if(input[1]){
        if(speed.x<0){
            speed.x+= acceler*deltaTime*20;
        }else {
            speed.x += acceler*deltaTime;
        }
        if(maxspeed<speed.x){
            speed.x = maxspeed;
        }
    }
    if(fabsf(speed.y>maxspeed)){

        speed.y +=deltaTime*3;
    }
    if(input[2]){
        if(speed.y>0){
            speed.y -= acceler*deltaTime*20;
        }else {
            if(fabsf(speed.y)>maxspeed){

                speed.y +=deltaTime*3;
            } else{

                speed.y -= acceler*deltaTime;
            }
        }
    }
    if(input[3]) {
        if(speed.y<0){
            speed.y += acceler*deltaTime*20;
        }else {
            speed.y += acceler*deltaTime;
        }
        if (maxspeed < speed.y) {
            speed.y = maxspeed;
        }
    }
    position.x += speed.x;
    position.y += speed.y;
    //std::cout<<speed.x<<"     "<<speed.y<<"    "<<deltaTime<<std::endl;

    if(input[4]){
        fire();
    }
    if(bullet->isFired()) {
        coordinats bulletCoor = bullet->getPosition();
        bulletCoor.y += bullet->getFireSpeed();
        bullet->setPosition(bulletCoor);
        if(abs(abs(bullet->getPosition().y) - abs(position.y)) > 431){
            bullet->setFired(false);
            bullet->setPosition(0,0);
        }
    }
}


float PlayerCar::getSpeed(){
    return speed.y;
}

void PlayerCar::fire() {
    if(!bullet->isFired()) {
        bullet->setPosition(getPosition());
        bullet->setFired(true);
    }
}

bool PlayerCar::OnCollision(std::shared_ptr<Entity> other) {
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

