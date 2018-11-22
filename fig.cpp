//
// Created by nick on 20.11.18.
//

#include "fig.h"

Fig::Fig(std::vector<float> size, std::vector<float> position, std::vector<float> col) {
    sf::Vector2f s(size[0], size[1]);
    body.setSize(s);
    body.setFillColor(sf::Color(col[0], col[1], col[2]));
    body.setPosition(sf::Vector2f(position[0], position[1]));
    body.setOrigin(s/2.0f);
}

Fig::~Fig() {

}

void Fig::Draw(sf::RenderWindow &window) {
    window.draw(body);
}

