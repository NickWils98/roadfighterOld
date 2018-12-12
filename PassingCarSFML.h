//
// Created by nick on 12.12.18.
//

#ifndef ROADFIGHTER_PASSINGCARSFML_H
#define ROADFIGHTER_PASSINGCARSFML_H


#include <SFML/Graphics.hpp>
#include "PassingCar.h"

class PassingCarSFML : public PassingCar {
public:
    PassingCarSFML(std::shared_ptr<sf::Texture> tex, sf::Vector2f size, sf::Vector2f position, sf::RenderWindow& window, float speed, float accel, sf::Vector2f hardness);

    virtual ~PassingCarSFML();
    void update();
    void render() override ;

private:
    sf::RectangleShape body;
    sf::RenderWindow& window;
};


#endif //ROADFIGHTER_PASSINGCARSFML_H
