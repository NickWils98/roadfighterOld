//
// Created by nick on 04.12.18.
//

#include <math.h>
#include <iostream>
#include "PlayerCar.h"

void PlayerCar::Update(float deltaTime, std::vector<bool> input) {

//    x *= 0.5f;
//    y *= 0.5f;

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

    if(input[2]){
        if(speed.y>0){
            speed.y -= acceler*deltaTime*20;
        }else {
            speed.y -= acceler*deltaTime;
        }
        if(-maxspeed>speed.y){
            speed.y = -maxspeed;
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
    std::cout<<speed.x<<"     "<<speed.y<<"    "<<deltaTime<<std::endl;
}


float PlayerCar::getSpeed(){
    return speed.y;
}

