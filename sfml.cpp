//
// Created by nick on 20.11.18.
//

#include "sfml.h"

sfml::sfml() {}

sfml::~sfml() {

}

void sfml::ResizeView(const sf::RenderWindow& window, sf::View& view, float VIEW_HEIGHT){
    float aspectRatio = static_cast<float>(window.getSize().x) / static_cast<float>(window.getSize().y);
    view.setSize(VIEW_HEIGHT*aspectRatio, VIEW_HEIGHT);
}

void sfml::run(sf::RenderWindow& window) {






}

void sfml::addFig(std::vector<float> size, sf::RenderWindow& window) {
    sf::RectangleShape body;
    sf::Vector2f s(size[0], size[1]);
    body.setSize(s);
    body.setFillColor(sf::Color::Blue);
    body.setPosition(200.6f, 200.6f);
    body.setOrigin(s/2.0f);
    window.draw(body);
}

sf::RenderWindow& sfml::initialize() {
    sf::RenderWindow window(sf::VideoMode(700, 700), "Roadfighter", sf::Style::Close | sf::Style::Resize);
    return window;
}
