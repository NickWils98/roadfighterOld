//
// Created by nick on 11.12.18.
//

#ifndef ROADFIGHTER_BULLETSFML_H
#define ROADFIGHTER_BULLETSFML_H


#include <SFML/Graphics.hpp>
#include <memory>
#include "Bullet.h"

class BulletSFML : public Bullet {
public:
    BulletSFML(sf::RenderWindow& window, bool f);
    ~BulletSFML() = default;
    void render();
    void update();
    void setSize();
private:
    sf::RenderWindow& window;
    sf::RectangleShape body;
};


#endif //ROADFIGHTER_BULLETSFML_H
