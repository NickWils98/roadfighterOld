//
// Created by nick on 01.12.18.
//

#include <iostream>
#include "World.h"
#include "Collider.h"

World::World(){
    entityList = {};
}

void World::add(std::shared_ptr<Entity> obj) {
    entityList.push_back(obj);
    std::cout<<entityList.size();
}

void World::render() {
    for(auto obj : entityList){
        obj->render();
    }
}

void World::update() {
    for(auto obj : entityList){
        obj->update();
    }
}

void World::Collision() {
    if(!entityList.empty()) {
        for (int i = 0; i < entityList.size() - 1; i++) {
            for (int j = i + 1; j < entityList.size(); j++) {
                if (i != j) {
                    Collider col(entityList[i]);
                    Collider col2(entityList[j]);
                    if(col.CheckCollision(col2, 1.0f)){
                        entityList[i]->OnCollision(entityList[i]->getHit(), entityList[j]->getSpeed(), entityList[j]->getHardness());
                    }
                }
            }
        }
    }
}

void World::WallCollision() {
    for(auto obj : entityList){
        obj->WallCollision();
    }

}
