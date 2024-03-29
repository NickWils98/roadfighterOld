//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_WORLD_H
#define ROADFIGHTER_WORLD_H


#include <vector>
#include "Entity.h"

class World: public Entity {
public:
    World();

private:
    std::vector<std::shared_ptr<Entity>> entityList;
public:
    void add(std::shared_ptr<Entity> obj);
    void update();
    void WallCollision();
    void remove(std::shared_ptr<Entity> toDel);
    void render();
    void Collision();
    virtual bool OnCollision(std::shared_ptr<Entity> other);
};


#endif //ROADFIGHTER_WORLD_H
