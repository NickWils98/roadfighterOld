//
// Created by nick on 04.12.18.
//

#include "CarSFML.h"

CarSFML::CarSFML(sf::Texture* tex, sf::Vector2f s, sf::Vector2f pos, sf::RenderWindow& window, float speed, float acccel) : window(window) {
    body.setSize(s);
    body.setTexture(tex);
    body.setPosition(pos);
    body.setOrigin(s/2.0f);
    this->position.x = pos.x;
    position.y = pos.y;
    totaltime = 0;
    this->speeding = speed;
    size.x = s.x;
    size.y = s.y;
    hardness.x = 0.2;
    hardness.y = 0.8;
    acceler = acccel;
    maxspeed= speed;
}

CarSFML::~CarSFML() {

}

void CarSFML::render() {
    window.draw(body);
}

void CarSFML::update() {
    body.setPosition(position.x, position.y);
}
