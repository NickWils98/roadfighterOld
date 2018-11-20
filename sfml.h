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

    void initialise();
    void ResizeView(const sf::RenderWindow& window, sf::View& view);

private:
    float VIEW_HEIGHT = 521.6f;
};




#endif //ROADFIGHTER_SFML_H
