//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_GAME_H
#define ROADFIGHTER_GAME_H

#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "World.h"
#include <memory>
class Game {
public:
    Game();

    virtual ~Game();

    void run();

    void handleEvent();

private:
    sf::RenderWindow m_window;
    std::shared_ptr<World> world;
    sf::View view;



};


#endif //ROADFIGHTER_GAME_H
