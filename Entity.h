//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_ENTITY_H
#define ROADFIGHTER_ENTITY_H

#include <memory>

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

    coordinats size;
    coordinats speed;
    coordinats position;
public:
    const coordinats getSize() const;
    coordinats getPosition() const;
    coordinats getSpeed() const;

    void setPosition(const coordinats& posistion);
    void setPosition(float x, float y);

    void OnCollision(coordinats direction);

};


#endif //ROADFIGHTER_ENTITY_H
