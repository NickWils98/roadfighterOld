//
// Created by nick on 20.11.18.
//

#include "sfml.h"

sfml::sfml() {}

sfml::~sfml() {

}

void sfml::ResizeView(const sf::RenderWindow& window, sf::View& view){
    float aspectRatio = static_cast<float>(window.getSize().x) / static_cast<float>(window.getSize().y);
    view.setSize(VIEW_HEIGHT*aspectRatio, VIEW_HEIGHT);
}

void sfml::initialise() {
    sf::RenderWindow window(sf::VideoMode(700, 700), "Roadfighter", sf::Style::Close | sf::Style::Resize);
    sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

    float deltaTime;
    sf::Clock clock;

    while(window.isOpen()) {
        deltaTime = clock.restart().asSeconds();
        if (deltaTime > 1.0f / 20.0f) {
            deltaTime = 1.0f / 20.0f;
        }

        sf::Event evnt;
        while (window.pollEvent(evnt)) {
            switch (evnt.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    ResizeView(window, view);
                    break;
            }
        }


        window.clear(sf::Color(150, 150, 150));
        window.setView(view);


        window.display();
    }

}
