#include <iostream>


class integer{
    private:
    int value{};
    public:
    integer (int v){
        value=v;
    }
    void incr () {value = value + 1;}
    void decr () {value = value - 1;}
};

int main (){
    integer i(5);
    integer j=i;
    i=j;
    return 0;
}