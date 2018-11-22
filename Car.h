//
// Created by nick on 20.11.18.
//

#ifndef ROADFIGHTER_CAR_H
#define ROADFIGHTER_CAR_H


#include <vector>

class Car {
public:
    Car();

    virtual ~Car();
    std::vector<float> getSize(){
        return size;
    }
    std::vector<float> getPos(){
        return position;
    }
    std::vector<float> getColor(){
        return Color;
    }
protected:
    std::vector<float> size;
    std::vector<float> position;
    std::vector<float> Color;
};


#endif //ROADFIGHTER_CAR_H
