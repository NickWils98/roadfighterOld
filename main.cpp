#include <iostream>

#include <vector>
#include "Game.h"
#include "sfml.h"
#include "world.h"
#include "fig.h"

float VIEW_HEIGHT = 521.6f;

int main()
{

    sf::RenderWindow window(sf::VideoMode(700, 700), "Roadfighter", sf::Style::Close | sf::Style::Resize);
    sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

    float deltaTime;
    sf::Clock clock;

    sfml game1;
    world game2;
    Car car = game2.addCar();
    Fig fig(car.getSize(), car.getPos(), car.getColor());

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
                    game1.ResizeView(window, view, VIEW_HEIGHT);
                    break;
            }
        }


        window.clear(sf::Color(150, 150, 150));
        window.setView(view);
        fig.Draw(window);
        window.display();
    }



    return 0;
}