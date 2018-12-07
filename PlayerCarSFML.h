//
// Created by nick on 05.12.18.
//

#ifndef ROADFIGHTER_PLAYERCARSFML_H
#define ROADFIGHTER_PLAYERCARSFML_H


#include <SFML/Graphics.hpp>
#include "PlayerCar.h"

class PlayerCarSFML: public PlayerCar {
public:
    PlayerCarSFML(sf::Texture* tex, sf::Vector2f size, sf::Vector2f position, sf::RenderWindow& window, float speed);

    virtual ~PlayerCarSFML();
    void update();
    void render() override ;
    std::vector<bool> getInput() override ;


private:
    sf::RectangleShape body;
    sf::RenderWindow& window;
};

#endif //ROADFIGHTER_PLAYERCARSFML_H
