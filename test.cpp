#include <iostream>


int main (int argc, char* argv[])
{
    std::cout << "Hello World" << 12 << true << 15.56 << std::endl;
    return 0;
}

extern int k;  // variable globale

int add (int i, int j){
    return i+j;
}