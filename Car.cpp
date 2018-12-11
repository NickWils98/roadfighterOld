//
// Created by nick on 04.12.18.
//

#include <iostream>
#include "Car.h"

Car::Car() {}

Car::~Car() {

}

void Car::WallCollision() {
    if(position.x - getSize().x/2<170){
        position.x  =  170+ getSize().x/2  ;
        std::cout<<getSize().x<<std::endl;
        speed.y/=1.01;
        speed.x=0;
    } else if(position.x+ getSize().x/2>348){
        position.x = 348-getSize().x/2;
        speed.y/=1.01;
        speed.x=0;
    }
}
