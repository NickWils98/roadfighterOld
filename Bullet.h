//
// Created by nick on 11.12.18.
//

#ifndef ROADFIGHTER_BULLET_H
#define ROADFIGHTER_BULLET_H


#include "Entity.h"

class Bullet : public Entity {
public:
    Bullet();
    ~Bullet() = default;

    bool isFired() const;

    void setFired(bool fired);

    float getFireSpeed() const;

    void setFireSpeed(float fireSpeed);

    virtual void render() = 0;

    virtual void update() = 0;

    void WallCollision();


    bool OnCollision(std::shared_ptr<Entity> other);
protected:
    float fireSpeed;
    bool fired;

};


#endif //ROADFIGHTER_BULLET_H
