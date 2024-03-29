//
// Created by nick on 01.12.18.
//

#ifndef ROADFIGHTER_GAME_H
#define ROADFIGHTER_GAME_H

#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "World.h"
#include "CarSFML.h"
#include "PlayerCar.h"
#include "Car.h"
#include "EnemyCar.h"
#include "CarSFML.h"
#include "PlayerCar.h"
#include "PlayerCarSFML.h"
#include "PassingCarSFML.h"
#include <memory>

class Game {
public:
    Game();

    virtual ~Game();
    void init();
    void DrawBackground();
    void run();
    void addPassingCar();
    void handleEvent();
    void checkRelevance();

private:
    sf::RenderWindow m_window;
    std::shared_ptr<World> world;
    sf::View view;
    std::vector<std::shared_ptr<CarSFML>> enemys = {};
    std::vector<std::shared_ptr<PassingCarSFML>> passings = {};
    std::shared_ptr<PlayerCarSFML> player;
    std::vector<std::shared_ptr<sf::Texture>> textures = {};
    std::vector<sf::Sprite>backgrounds = {};
    std::shared_ptr<BulletSFML> bullet;


};


#endif //ROADFIGHTER_GAME_H
