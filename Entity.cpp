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

bool Entity::isVunerable() const {
    return vunerable;
}

void Entity::setVunerable(bool vunerable) {
    Entity::vunerable = vunerable;
}

bool Entity::isHitting() const {
    return hitting;
}

void Entity::setHitting(bool hitting) {
    Entity::hitting = hitting;
}
