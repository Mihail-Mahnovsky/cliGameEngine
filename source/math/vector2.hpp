
class vector2
{
public:
    vector2(float x,float y) :_x(x),_y(y) {}
    ~vector2() = default;

    float getX() { return _x; }
    float getY() { return _y; }
    void setX(float x) { _x = x; }
    void setY(float y) { _y = y; }
private:
    float _x;
    float _y;
};
