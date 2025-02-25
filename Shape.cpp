#include "Shape.h"

Shape* find(int x, int y, std::vector<Shape*>& v) {
    for (auto& shape : v) {
        if (shape->area() == x * y) {
            return shape;
        }
    }
    return nullptr;
}

int main() {
    Circle c(2, 3, 5, 4);
    Rectangle r(1, 1, 5, 3, 4);
    Shape* psc = &c;
    Shape* psr = &r;
    std::vector<Shape*> v;
    v.push_back(psc);
    v.push_back(psr);
    Shape* s1 = find(2, 3, v);
    Shape* s2 = v.at(1);
    return 0;
}
