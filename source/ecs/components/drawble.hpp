#pragma once
#include "../component.hpp"
#include "../../math/vector2.hpp"

const short _width = 4;
const short _height = 4;

class Drawble : public Component{
public:
    Drawble(const char sprite[_width][_height]) {
        for (int i = 0; i < _width; ++i) {
            for (int j = 0; j < _height; ++j) {
                _sprite[i][j] = sprite[i][j];
            }
        }
    }
    auto getSprite(){
        return _sprite;
    }
    char getSpriteChar(int x,int y){
        return _sprite[x][y];
    }
    short getWidth() { return _width; }
    short getHeight() { return _height; }
private:
    char _sprite[_width][_height];
};