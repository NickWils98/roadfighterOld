//
// Created by nick on 01.12.18.
//

#include "Entity.h"


Entity::coordinats Entity::getPosition() const {
    return position;
}

void Entity::setPosition(const Entity::coordinats &position) {
    Entity::position = position;
}

const Entity::coordinats Entity::getSize() const {
    return size;
}

void Entity::setPosition(float x, float y) {
    position.x = x;
    position.y = y;

}

Entity::coordinats& Entity::getSpeed() {
    return speed;
}

void Entity::OnCollision(coordinats direction, coordinats& sp, const coordinats hard) {
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
            sp.y = diff /2;
            speed.y = diff*0.9/2;
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
            sp.y = diff *0.9/2;
            speed.y = diff/2;
        }
    }
}



Entity::Entity()
{

}

const Entity::coordinats &Entity::getHit() const {
    return hit;
}

void Entity::setHit(const float x, const float y) {
    hit.x = x;
    hit.y = y;
}

const Entity::coordinats &Entity::getHardness() const {
    return hardness;
}
