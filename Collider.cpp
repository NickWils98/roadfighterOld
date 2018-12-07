//
// Created by nick on 06.12.18.
//

#include <algorithm>
#include <utility>
#include "Collider.h"

Collider::Collider(std::shared_ptr<Entity> obj) :
        object(std::move(obj))
{
}

Collider::~Collider() {

}

bool Collider::CheckCollision(Collider other, float push) {
    coordinats otherPosition = other.GetPosition();
    coordinats otherHalfSize = other.GetHalfSize();
    coordinats thisPosition = GetPosition();
    coordinats thisHalfSize = GetHalfSize();
    coordinats direction = getPosition();

    float deltaX = otherPosition.x - thisPosition.x;
    float deltaY = otherPosition.y - thisPosition.y;

    float intersectX = abs(deltaX) - (otherHalfSize.x + thisHalfSize.x);
    float intersectY = abs(deltaY) - (otherHalfSize.y + thisHalfSize.y);

    if(intersectX < 0.0f && intersectY < 0.0f){

        push = std::min(std::max(push, 0.0f), 1.0f);

        if(intersectX > intersectY){
            if(deltaX > 0.0f){
                Move(intersectX * (1.0f - push), 0.0f);
                other.Move(-intersectX * push, 0.0f);

                direction.x = 1.0f;
                direction.y = 0.0f;

            } else{

                Move(-intersectX * (1.0f - push), 0.0f);
                other.Move(intersectX * push, 0.0f);

                direction.x = -1.0f;
                direction.y = 0.0f;
            }
        } else{
            if(deltaY > 0.0f){
                Move(0.0f, intersectY * (1.0f - push));
                other.Move(0.0f, -intersectY * push);

                direction.x = 0.0f;
                direction.y = 1.0f;
            } else{

                Move(0.0f, -intersectY * (1.0f - push));
                other.Move(0.0f, intersectY * push);

                direction.x = 0.0f;
                direction.y = -1.0f;
            }
        }

        return true;
    }


    return false;
}

Entity::coordinats Collider::GetHalfSize() {
    coordinats halfsize;
    halfsize.x = object->getSize().x/2.0f;
    halfsize.y = object->getSize().y/2.0f;

    return halfsize;
}

void Collider::render() {

}

void Collider::update() {

}
