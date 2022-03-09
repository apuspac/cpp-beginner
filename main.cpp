struct fractional
{
    int num;
    int denom;

    fractional(int num)
        : num(num), denom(1)
    {
    }
};

int main()
{
    fractional a = 1;
    fractional b = 2;

    std::cout << a << " " << b << "\n";
}