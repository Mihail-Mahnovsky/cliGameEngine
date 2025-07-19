#pragma once
#include "../component.hpp"
#include "../../math/vector2.hpp"

class Position : public Component{
public:
    Position(float x,float y) :pos(vector2(x,y)) {}
    float getX() { return pos.getX(); }
    float getY() { return pos.getY(); }
    void setX(float x) { pos.setX(x); }
    void setY(float y) { pos.setY(y); }
private:
    vector2 pos;
};