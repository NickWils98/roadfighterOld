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

Entity::coordinats Entity::getSpeed() const {
    return speed;
}

void Entity::OnCollision(coordinats direction) {
    if(direction.x < 0.0f){
        //Collision on the left.
        speed.x = 0.0f;
    } else if(direction.x > 0.0f){
        //Collision on the right.
        speed.x = 0.0f;
    }
    if(direction.y < 0.0f){
        //Collision on the bottom.
        speed.y = 0.0f;
    } else if(direction.y > 0.0f){
        //Collision on the top.
        speed.y = 0.0f;
    }
}



Entity::Entity()
{

}
