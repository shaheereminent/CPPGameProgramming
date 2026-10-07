#include <iostream>

int main (int argc, char * argv[])
{
    const double PI            = 3.14159;
    int          radius        = 10;
    double       circumference = 2 * PI * radius;

    std::cout << circumference << "cm\n";

    return 0;
};
