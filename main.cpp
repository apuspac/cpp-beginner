#include "all.h"

struct fractional
{
    int num;
    int denom;

    fractional(int num)
        : num(num), denom(1)
    {
    }
};

fractional operator+(fractional &l, fractional &r)
{
    if (l.denom == r.denom)
    {
        return fractional { l.num + r.num }
    }
}

int main()
{
    fractional a = 1;
    fractional b = 2;

    std::cout << a.num << "  " << b.denom << "\n";
}