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
    circle (int a, int b, int c, int r): shape (x,y,color), radius(r){}
    float area(){
        return 3.14 * radius*radius
    }
};

class square: public Shape
{
    private:
    int side;
    public:
    square (int a, int b, int c, int s): shape (x,y,color), side(s){}
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
    rectangle (int a, int b, int c, int w, int h): shape (x,y,color), width(w),height(h) {}
    float area (){
        return height * width
    }
};

int main () {
    circle c (2, 3, 4.5);
    rectangle r (1,1,3,4);
    Shape* psc = &c;  //inutile
    Shape* psr = &r;  //inutile
    std::vector<Shape*> v;
    v.push_back(psc);
    v.push_back(psr);
    s= find_at_position (2,3,v);
    Shape* s = v.at(1);
    return 0
}

