#include "IntStack.h"

int main() {
    IntStack s1;
    s1.print();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.print();
    std::cout << s1.pop() << std::endl;
    s1.print();

    IntStack s2 = s1;
    s2.print();

    IntStack s3(5);
    s3.push(7);
    s3.push(8);
    s3.print();

    s3 = s1;
    s3.print();

    return 0;
}
