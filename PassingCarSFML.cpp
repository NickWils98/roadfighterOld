//
// Created by nick on 12.12.18.
//

#include "PassingCarSFML.h"
PassingCarSFML::PassingCarSFML(std::shared_ptr<sf::Texture> tex, sf::Vector2f s, sf::Vector2f pos, sf::RenderWindow& window, float speed, float acccel, sf::Vector2f hard) : window(window) {
    body.setSize(s);
    body.setTexture(tex.get());
    body.setPosition(pos);
    body.setOrigin(s/2.0f);
    this->position.x = pos.x;
    position.y = pos.y;
    totaltime = 0;
    this->speeding = speed;
    size.x = s.x;
    size.y = s.y;
    hardness.x = hard.x;
    hardness.y = hard.y;
    acceler = acccel;
    maxspeed= speed;
    vunerable = true;
}

PassingCarSFML::~PassingCarSFML() {

}

void PassingCarSFML::render() {
    window.draw(body);
}

void PassingCarSFML::update() {
    body.setPosition(position.x, position.y);
}
