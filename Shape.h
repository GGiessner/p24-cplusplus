#include <iostream>
#include <vector>

class Shape {
private:
    int x, y;
    int color;

public:
    Shape(int a, int b, int c) : x(a), y(b), color(c) {}

    void move(int a, int b) {
        x = a; y = b;
    }

    virtual float area() = 0;

    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int a, int b, int c, int r) : Shape(a, b, c), radius(r) {}

    float area() override {
        return 3.14f * radius * radius;
    }
};

class Square : public Shape {
private:
    int side;

public:
    Square(int a, int b, int c, int s) : Shape(a, b, c), side(s) {}

    float area() override {
        return side * side;
    }
};

class Rectangle : public Shape {
private:
    int width;
    int height;

public:
    Rectangle(int a, int b, int c, int w, int h) : Shape(a, b, c), width(w), height(h) {}

    float area() override {
        return height * width;
    }
};

Shape* find(int x, int y, std::vector<Shape*>& v);