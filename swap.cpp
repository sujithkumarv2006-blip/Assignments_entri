#include <iostream>

void swapNumbers(int &a, int &b)
{
    int num;
    num = a;
    a = b;
    b = num;
}

int main()
{
    int x, y;

   std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    std::cout << "Before swapping: " << x << ", " << y << std::endl;

    swapNumbers(x, y);

    std::cout << "After swapping: " << x << ", " << y << std::endl;

    return 0;
}

/*
void swapNumbers(int &a, int &b)
{
    int temporary;
    temporary = a;
    a = b;
    b = temporary;
}
    */