//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_ENTITY_H
#define ROADFIGHTER_ENTITY_H

#include <memory>
#include <cmath>
class Entity {
public:
    struct coordinats {
        float y = 0;
        float x = 0;
    };
    Entity();
    virtual ~Entity() = default;

    virtual void render() = 0;

    virtual void update() = 0;

    virtual void WallCollision() =0;

    virtual bool OnCollision(std::shared_ptr<Entity> other) = 0;




protected:

    coordinats hit;
    coordinats size;
    coordinats speed;
    coordinats position;
    coordinats hardness;
    bool vunerable;
    bool hitting = false;
public:
    bool isHitting() const;

    void setHitting(bool hitting);

public:
    bool isVunerable() const;

    void setVunerable(bool vunerable);

public:
    void setHit(const float x, const float y);

    const coordinats &getHit() const;
    const coordinats &getHardness() const;
    const coordinats getSize() const;
    coordinats getPosition() const;
    coordinats& getSpeed();

    void setPosition(const coordinats& posistion);
    void setPosition(float x, float y);


};


#endif //ROADFIGHTER_ENTITY_H
