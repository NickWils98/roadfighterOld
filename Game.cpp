//
// Created by nick on 01.12.18.
//

#include <iostream>
#include "Game.h"
#include "PlayerCarSFML.h"
#include "PassingCar.h"
#include <random>

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

    Game::init();

    bool winner = false;
    //Main loop of the game
    while (m_window.isOpen()) {

        deltaTime = timer.restart().asSeconds();
        if(deltaTime>1.0f/20.0f){
            deltaTime= 1.0f/20.0f;
        }
        checkRelevance();
        addPassingCar();
        float old = player->getPosition().y;
        std::vector<bool> input = player->getInput();

        if(input[5]){
            bullet->setSize();
        }
        player->Update(deltaTime, input);
        for(auto e : enemys){
            e->goDown(deltaTime);
        }
        for(auto p : passings){
            p->goDown(deltaTime);
        }
        world->update();
        world->Collision();
        world->WallCollision();
        // vieuw
        float newpos = player->getPosition().y;
        if(player->getPosition().y > 320){

        } else if(old>newpos){
            view.move(0, -fabsf((fabsf(old)-fabsf(newpos))));
        } else {
            view.move(0, fabsf(fabsf(old) - fabsf(newpos)));
        }

        //Render
        m_window.clear();
        m_window.setView(view);
        // background
        DrawBackground();

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
        texture.loadFromFile("../afb/loser.jpg");
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

void Game::init() {
    std::shared_ptr<sf::Texture> textureCar = std::make_shared<sf::Texture>();
    textureCar->loadFromFile("./../afb/car1.PNG");
    textures.push_back(textureCar);

    bullet = std::make_shared<BulletSFML>(m_window, false);
    world->add(bullet);
    player = std::make_shared<PlayerCarSFML>(textureCar, sf::Vector2f(20.0f, 35.0f), sf::Vector2f(200.0f, 320.0f), m_window, 18, 2, bullet);


    std::shared_ptr<sf::Texture> textureCar2 = std::make_shared<sf::Texture>();
    textureCar2->loadFromFile("./../afb/car2.JPG");
    textures.push_back(textureCar2);
    enemys.push_back(std::make_shared<CarSFML>(textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(310, 320), m_window, 12, 3.0));
    enemys.push_back(std::make_shared<CarSFML>(textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(310.0f, 240.0f), m_window, 11, 2.5));
    enemys.push_back(std::make_shared<CarSFML>(textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(200, 240.0f), m_window, 14, 1.5));
    enemys.push_back(std::make_shared<CarSFML>(textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(310.0f, 180.0f), m_window, 10, 1));
    enemys.push_back(std::make_shared<CarSFML>(textureCar2, sf::Vector2f(20.0f, 30.0f), sf::Vector2f(200, 180.0f), m_window, 15, 3));

    world->add(player);
    for(auto e : enemys){
        world->add(e);
    }

    std::shared_ptr<sf::Texture> backgr = std::make_shared<sf::Texture>();
    backgr->loadFromFile("../afb/car_game.jpg");
    textures.push_back(backgr);
    sf::Sprite background(*backgr.get());
    backgrounds.push_back(background);

    background.setPosition(0 ,-431);

    std::shared_ptr<sf::Texture> backgrstart = std::make_shared<sf::Texture>();
    backgrstart->loadFromFile("../afb/car_start.jpg");
    textures.push_back(backgrstart);
    sf::Sprite background2(*backgrstart.get());
    backgrounds.push_back(background2);

    background2.setPosition(0 ,0);

}

void Game::DrawBackground() {
    if(player->getPosition().y>=-431){
        m_window.draw(backgrounds[1]);
        backgrounds[0].setPosition(0, -431);
        m_window.draw(backgrounds[0]);
        backgrounds[0].setPosition(0, -862);
        m_window.draw(backgrounds[0]);
    } else {
        backgrounds[0].setPosition(0, (static_cast<int>(player->getPosition().y) / 431 - 2) * 431);
        m_window.draw(backgrounds[0]);
        backgrounds[0].setPosition(0, (static_cast<int>(player->getPosition().y) / 431 - 1) * 431);
        m_window.draw(backgrounds[0]);
        backgrounds[0].setPosition(0, (static_cast<int>(player->getPosition().y) / 431) * 431);
        m_window.draw(backgrounds[0]);
        backgrounds[0].setPosition(0, (static_cast<int>(player->getPosition().y) / 431 + 1) * 431);
        m_window.draw(backgrounds[0]);
    }
}

void Game::addPassingCar() {
     int v1 = std::rand() % 1000;
    if(v1>990 && passings.size()<10){
        float x = std::rand() % 140 + 180;
        float y = std::rand() % 431 + fabsf(player->getPosition().y-431);
        std::shared_ptr<sf::Texture> textureCar3 = std::make_shared<sf::Texture>();
        textureCar3->loadFromFile("./../afb/car_yellow.PNG");
        textures.push_back(textureCar3);
        std::shared_ptr<PassingCarSFML> passengercar= std::make_shared<PassingCarSFML>(textureCar3, sf::Vector2f(22.0f, 33.0f), sf::Vector2f(x, -y), m_window, 10, 2.0, sf::Vector2f(0.5, 0.5));
        passings.push_back(passengercar);
        world->add(passengercar);

    }
}

void Game::checkRelevance() {
    for(int i = 0; i<passings.size(); i++) {
        if(fabsf(fabsf(passings[i]->getPosition().y)-fabsf(player->getPosition().y))> 800){
            world->remove(passings[i]);
            passings.erase(passings.begin() + i);

        }
    }
}


