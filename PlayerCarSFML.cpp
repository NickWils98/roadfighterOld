//
// Created by nick on 05.12.18.
//

#include "PlayerCarSFML.h"

PlayerCarSFML::PlayerCarSFML(std::shared_ptr<sf::Texture> tex, sf::Vector2f s, sf::Vector2f pos, sf::RenderWindow &window, float maxsp, float acceler)
        : window(window) {
    body.setSize(s);
    body.setTexture(tex.get());
    body.setPosition(pos);
    body.setOrigin(s/2.0f);
    position.x = pos.x;
    position.y = pos.y;
    totaltime = 0;
    this->maxspeed = maxsp;
    this->acceler = acceler;
    hardness.x = 0.2;
    hardness.y = 0.8;


    speed.x = 0;
    speed.y = 0;
    size.x = s.x;
    size.y = s.y;
}

PlayerCarSFML::~PlayerCarSFML() {

}

void PlayerCarSFML::render() {
    window.draw(body);
}

void PlayerCarSFML::update() {
    body.setPosition(position.x, position.y);
}

std::vector<bool> PlayerCarSFML::getInput() {
    std::vector<bool> input = {};

    input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Left));
    input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Right));
    input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Up));
    input.push_back(sf::Keyboard::isKeyPressed(sf::Keyboard::Down));
    return input;
}

