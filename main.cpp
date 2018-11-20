#include <SFML/Graphics.hpp>
#include <iostream>

#include <vector>
#include "Game.h"
#include "sfml.h"

static const float VIEW_HEIGHT = 512.0f;

void ResizeView(const sf::RenderWindow& window, sf::View& view){
    float aspectRatio = static_cast<float>(window.getSize().x) / static_cast<float>(window.getSize().y);
    view.setSize(VIEW_HEIGHT*aspectRatio, VIEW_HEIGHT);
}
int main()
{
    sfml game1;
    game1.initialise();

    return 0;
}