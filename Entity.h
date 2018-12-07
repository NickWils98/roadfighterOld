//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_ENTITY_H
#define ROADFIGHTER_ENTITY_H

#include <memory>
#include <cmath>
class Entity {
public:
    Entity();
    virtual ~Entity() = default;

    virtual void render() = 0;

    virtual void update() = 0;


    struct coordinats {
        float y = 0;
        float x = 0;
    };

protected:

    coordinats hit;
public:
    void setHit(const float x, const float y);

public:
    const coordinats &getHit() const;

protected:
    coordinats size;
    coordinats speed;
    coordinats position;
    coordinats hardness;
public:
    const coordinats &getHardness() const;

public:
    const coordinats getSize() const;
    coordinats getPosition() const;
    coordinats& getSpeed();

    void setPosition(const coordinats& posistion);
    void setPosition(float x, float y);

    void OnCollision(coordinats direction, coordinats& sp, const coordinats hard);

};


#endif //ROADFIGHTER_ENTITY_H
