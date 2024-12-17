#include <iostream>

class rational
{
private:
    int num{0};
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
    int get_n () const 
    {
        return num;
    }
    int get_d () const
    {
        return denom;
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
    return rational (r1.get_n()* r2.get_d()+ r1.get_d()*r2.get_n(), r1.get_d()*r2.get_d());
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