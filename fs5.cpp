#include <iostream>

class rational
{
private:
    int num{};
    int denom{1};

public:
    rational()
    {
    }
    rational(int v)
    {
        num = v;
    }
    rational(int v, int w)
    {
        num = v;
        denom = w;
    }
    void print()
    {
        std::cout << num << " / " << denom << std::endl;
    }
    float eval()
    {
        return static_cast<float>(num) / denom;
    }
};

int main()
{
    rational r1;
    rational r2(1);
    rational r3(1, 5);
    r1.print();
    r2.print();
    r3.print();
}