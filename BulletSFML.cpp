//
// Created by nick on 11.12.18.
//

#include "BulletSFML.h"

BulletSFML::BulletSFML(sf::RenderWindow &window, bool f) : window(window){
    body.setFillColor(sf::Color(57, 255, 20));
    body.setSize(sf::Vector2f(20, 20));
    body.setOrigin(body.getSize()/2.0f);
    fired = f;
    fireSpeed = -30;
    setHitting(true);
}

void BulletSFML::render() {
    if(fired) {
        window.draw(body);
    }
}

void BulletSFML::update() {
    if(fired) {
        body.setPosition(position.x, position.y);
    }
}

void BulletSFML::setSize() {
    body.setSize(sf::Vector2f(5,10));
}
