//
// Created by nick on 05.12.18.
//

#ifndef ROADFIGHTER_PLAYERCARSFML_H
#define ROADFIGHTER_PLAYERCARSFML_H


#include <SFML/Graphics.hpp>
#include "PlayerCar.h"

class PlayerCarSFML: public PlayerCar {
public:
    PlayerCarSFML(std::shared_ptr<sf::Texture> tex, sf::Vector2f size, sf::Vector2f position, sf::RenderWindow& window, float maxsp, float acceler);

    virtual ~PlayerCarSFML();
    void update();
    void render() override ;
    std::vector<bool> getInput() override ;

    sf::RectangleShape body;

private:
    sf::RenderWindow& window;
};

#endif //ROADFIGHTER_PLAYERCARSFML_H
