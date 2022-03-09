#include "all.h"

struct fractional
{
    int num;
    int denom;

    fractional(int num)
        : num(num), denom(1)
    {
    }

    fractional(int num, int denom)
        : num(num), denom(denom)
    {
    }
};

fractional operator+(fractional &l, fractional &r)
{
    if (l.denom == r.denom)
    {
        return fractional{l.num + r.num, l.denom};
    }
    else
    {
        return fractional(l.num * r.denom + r.num + l.denom, l.denom * r.denom);
    }
}

fractional operator-(fractional &l, fractional &r)
{
    if (l.denom == r.denom)
    {
        return fractional{l.num - r.num, l.denom};
    }
    else
    {
        return fractional{l.num * r.denom - r.num * l.denom, l.denom * r.denom};
    }
}

fractional operator*(fractional &l, fractional &r)
{
    return fractional(l.num * r.num, l.denom * r.denom);
}

fractional operator/(fractional &l, fractional &r)
{
    return fractional(l.num * r.num, l.denom * r.denom);
}

int main()
{
    fractional a(1, 2);
    fractional b(2, 2);

    std::cout << a.num << "  " << b.denom << "\n";

    auto c = a + b;
    std::cout << c.num << "/" << c.denom << "\n";

    c = a - b;
    std::cout << c.num << "/" << c.denom << "\n";

    c = a * b;
    std::cout << c.num << "/" << c.denom << "\n";

    c = a / b;
    std::cout << c.num << "/" << c.denom << "\n";
}