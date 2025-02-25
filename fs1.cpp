#include <iostream>

float pi (){
    return 3,14;
    }

float périmètre (int r){
    return pi()*2*r;
}

float surface(int r){
    return pi()*r*r;
}

float circle_area(int r){
    return pi()*r*r;
}

int main(){
    double radius;
    std::cout<<"Enter the radius of the circle: ";
    std::cin >> radius;
    double area = circle_area(radius);
    std::cout<<"The area of the circle is: "<< area << std::endl;

}
