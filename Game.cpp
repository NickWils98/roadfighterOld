//
// Created by nick on 01.12.18.
//

#include "Game.h"
#include "Car.h"
#include "EnemyCar.h"
#include "CarSFML.h"
#include "PlayerCar.h"
#include "PlayerCarSFML.h"


Game::Game()
        :   m_window    (sf::VideoMode(514, 431), "ROADFIGHTER",  sf::Style::Close | sf::Style::Resize),
            view(m_window.getDefaultView())
{

    m_window.setFramerateLimit(60);
    world = std::make_shared<World>();

    }

Game::~Game() {

}

void Game::run() {

    sf::Clock timer;
    float deltaTime;
    sf::Texture textureCar;
    textureCar.loadFromFile("../car1.PNG");
    sf::Texture textureCar2;
    textureCar2.loadFromFile("../car2.JPG");

    //world->init();

    std::shared_ptr<PlayerCar> player = std::make_shared<PlayerCarSFML>(&textureCar, sf::Vector2f(20.0f, 35.0f), sf::Vector2f(200.0f, 320.0f), m_window, 500, 5);
    std::shared_ptr<CarSFML> enemy = std::make_shared<CarSFML>(&textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(310.0f, 320.0f), m_window, 100, 4);

    world->add(player);
    world->add(enemy);
    sf::Texture texture;
    texture.loadFromFile("../car_game.jpg");
    sf::Sprite background(texture);
    sf::Sprite background2(texture);
    sf::Sprite background3(texture);

    background.setPosition(0 ,0);
    background2.setPosition(0 ,-431);
    background3.setPosition(0 ,-862);
    bool winner = false;
    //Main loop of the game
    while (m_window.isOpen()) {

        deltaTime = timer.restart().asSeconds();
        if(deltaTime>1.0f/20.0f){
            deltaTime= 1.0f/20.0f;
        }

        std::vector<bool> input = player->getInput();
        player->Update(deltaTime, input);

        enemy->goDown(deltaTime);
        world->update();
        world->Collision();
        view.move(0,player->getSpeed());
        if(background.getPosition().y> player->getPosition().y+431){
            background.setPosition(0, background.getPosition().y-1293);
        }
        if(background2.getPosition().y> player->getPosition().y+431){
            background2.setPosition(0, background2.getPosition().y-1293);
        }
        if(background3.getPosition().y> player->getPosition().y+431){
            background3.setPosition(0, background3.getPosition().y-1293);
        }
//        background.setPosition(0,player->getSpeed()+background.getPosition().y);

        //Render
        m_window.clear();
        m_window.setView(view);
        m_window.draw(background);
        m_window.draw(background2);
        m_window.draw(background3);
        world->render();
        m_window.display();

        //Handle window events
        handleEvent();

//        if(player->getPosition().y<-9000){
//            winner = true;
//            break;
//        }
//        if(enemy->getPosition().y <-9000){
//            break;
//        }

    }
    m_window.clear();
    if(winner){
        sf::Texture texture;
        texture.loadFromFile("../winner.jpg");
        sf::Sprite winner(texture);
        winner.setPosition(0, player->getPosition().y-270);
        m_window.draw(winner);
    } else {
        sf::Texture texture;
        texture.loadFromFile("../loser.jpg");
        sf::Sprite loser(texture);

        loser.setPosition(0, player->getPosition().y-270);
        m_window.draw(loser);
    }
    m_window.display();
    while(m_window.isOpen()){
        handleEvent();
    }
}

void Game::handleEvent() {
    sf::Event evnt;

    while (m_window.pollEvent(evnt)) {
        switch (evnt.type) {
            case sf::Event::Closed:
                m_window.close();
                break;
            case sf::Event::Resized:
                break;
            default:
                break;

        }
    }
}


