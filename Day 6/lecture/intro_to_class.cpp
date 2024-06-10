#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle()
    {
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h) : width(w), height(h) {}

    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea() { return width * height; }
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
};

int main()
{

    Rectangle r(2, 3);
    cout << r.getArea() << endl;

    return 0;
}