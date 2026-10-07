#include <iostream>

int main (int argc, char * argv[])
{

    int age;

    std::cout << "Please enter your age: ";
    std::cin  >> age;

    if (age >= 18)
    {
        std::cout << "You are free to ride the rollercoaster! 🎉";
    }
    else
    {
        std::cout << "I am sorry, you're cooked! 😕";
    };

    return 0;
};
