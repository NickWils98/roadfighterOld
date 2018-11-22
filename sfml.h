//
// Created by nick on 20.11.18.
//

#ifndef ROADFIGHTER_SFML_H
#define ROADFIGHTER_SFML_H


#include "Game.h"
#include <SFML/Graphics.hpp>

class sfml : public Game {
public:
    sfml();

    virtual ~sfml();

    sf::RenderWindow& initialize();
    void run(sf::RenderWindow& window);
    void ResizeView(const sf::RenderWindow& window, sf::View& view, float);

    void addFig(std::vector<float> size, sf::RenderWindow& window);

public:
};




#endif //ROADFIGHTER_SFML_H
