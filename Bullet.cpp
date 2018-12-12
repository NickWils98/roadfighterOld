//
// Created by nick on 11.12.18.
//

#include "Bullet.h"

Bullet::Bullet() {

}

bool Bullet::isFired() const {
    return fired;
}

void Bullet::setFired(bool fired) {
    Bullet::fired = fired;
}

float Bullet::getFireSpeed() const {
    return fireSpeed;
}

void Bullet::setFireSpeed(float fireSpeed) {
    Bullet::fireSpeed = fireSpeed;
}

void Bullet::WallCollision() {

}

bool Bullet::OnCollision(std::shared_ptr<Entity> other) {
    bool hit = false;
    if(fired  and other->isVunerable()){
        hit = true;
        fired = false;
        setPosition(0,0);
    }
    return hit;
}
