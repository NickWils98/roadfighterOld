//
// Created by nick on 04.12.18.
//

#ifndef ROADFIGHTER_CARSFML_H
#define ROADFIGHTER_CARSFML_H

#include <SFML/Graphics.hpp>
#include "EnemyCar.h"

class CarSFML: public EnemyCar {
public:
    CarSFML(sf::Texture* tex, sf::Vector2f size, sf::Vector2f position, sf::RenderWindow& window, float speed);

    virtual ~CarSFML();
    void update();
    void render() override ;

private:
    sf::RectangleShape body;
    sf::RenderWindow& window;
};


#endif //ROADFIGHTER_CARSFML_H
