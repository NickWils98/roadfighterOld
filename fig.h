//
// Created by nick on 20.11.18.
//

#ifndef ROADFIGHTER_FIG_H
#define ROADFIGHTER_FIG_H


#include <SFML/Graphics.hpp>

class Fig {
public:
    Fig(std::vector<float> size, std::vector<float> position, std::vector<float> col);
    ~Fig();

    void Draw(sf::RenderWindow& window);


private:
    sf::RectangleShape body;
};

#endif //ROADFIGHTER_FIG_H
