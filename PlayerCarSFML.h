//
// Created by nick on 05.12.18.
//

#ifndef ROADFIGHTER_PLAYERCARSFML_H
#define ROADFIGHTER_PLAYERCARSFML_H


#include <SFML/Graphics.hpp>
#include "PlayerCar.h"

class PlayerCarSFML: public PlayerCar {
public:
    PlayerCarSFML(std::shared_ptr<sf::Texture> tex, sf::Vector2f size, sf::Vector2f position, sf::RenderWindow& window, float maxsp, float acceler, std::shared_ptr<Bullet> bullet1);

    virtual ~PlayerCarSFML();
    void update();
    void render() override ;
    std::vector<bool> getInput() override ;
    std::shared_ptr<Bullet> fire();


protected:
    sf::RenderWindow& window;
    sf::RectangleShape body;

};

#endif //ROADFIGHTER_PLAYERCARSFML_H
