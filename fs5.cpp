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

rational operator+ (const rational &r1, const rational &r2)
{
    return rational (r1.num* r2.denom+ r1.deom*r2.num, r1.denom*r2.denom)
}

int main()
{
    rational r1;
    rational r2(1);
    rational r3(1, 5);
    r1.print();
    r2.print();
    r3.print();
}