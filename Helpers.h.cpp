#include <iostream>

void print()
{
    std::cout << "Helpers.h\n";
}

int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int summa = sum(300, 400);
    std::cout << summa << "\n";

    return 0;
}