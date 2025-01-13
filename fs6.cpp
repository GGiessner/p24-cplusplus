#include <iostream>
// Faire les fct area

class Shape
{   
    private:
    int x,y;
    int color;

    public:
    
    Shape (int a,int b, int c): x(a), y(b), color(c) {
        // body 
    }
    void move (int a, int b) {
        x = a; y = b;
    }
 
    virtual float area () {
        return 999999.9999;
    }

    virtual ~Shape() {}
};

class circle: public Shape
{
    private:
    int radius;
    public:
    float area(){
        return 3.14 * radius*radius
    }
};

class square: public Shape
{
    private:
    int side;
    public:
    float area (){
        return side*side
    }
};

class rectangle: public Shape
{
    private:
    int width;
    int height;
    public:
    float area (){
        return height * width
    }
};

int main () {
    circle c (2, 3, 4.5);
    rectangle r (1,1,3,4);
    Shape* psc = &c;
    Shape* psr = &r;
    std::vector<Shape*> v;
    v.push_back(psc);
    v.push_back(psr);
    s= find_at_position (2,3,v);
    Shape* s = v.at(1);
    retunr 0
}

