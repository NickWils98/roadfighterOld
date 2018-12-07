#include <iostream>
#include "Game.h"

//int main() {
#include <SFML/Graphics.hpp>
#include <math.h>
//    int main()
//    {
//        sf::RenderWindow    Window(sf::VideoMode(1000, 768), "", sf::Style::Close);
//        sf::View            View(Window.getDefaultView());
//        sf::FloatRect       fBounds(0.f, 0.f, 1000.f, 1000.f); // arbitrary > view height
//        sf::Texture     Texture;
//
//        Texture.loadFromFile("../background.jpg");
//        sf::IntRect         iBounds(fBounds);
//        Texture.setRepeated(true); // repeat tile over sprite height
//        sf::Sprite          Sprite(Texture, iBounds);
//        // move sprite 'up' by its height except the view height for start:
//        Sprite.setPosition(fBounds.left, fBounds.top - 1000.f + View.getSize().y);
//
//        float viewOffsetY = 0;
//        float spriteOffsetY = 0;
//        unsigned int textureHeight = Texture.getSize().y;
//
//        while (Window.isOpen()) {
//            sf::Event event;
//            while (Window.pollEvent(event)) {
//                if (event.type == sf::Event::Closed)
//                    Window.close();
//            }
//            View.setCenter(500.f, 500.f - viewOffsetY); // negative y to move 'up' along sprite height
//            viewOffsetY += 0.3f; // speed of view movement
//            spriteOffsetY = floor(viewOffsetY / textureHeight) * textureHeight;
//            Sprite.setPosition(fBounds.left, fBounds.top /* - 1000.f + View.getSize().y */ - spriteOffsetY);
//
//            Window.clear();
//            Window.setView(View);
//            Window.draw(Sprite);
//            Window.display();
//        }
//    }
int main(){
    Game game;
    game.run();

    return 0;
}
// inversion of control
// window maneger java
//TODO: swap graph