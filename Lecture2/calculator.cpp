#include <iostream>
#include <cmath>

int main (int argc, char * argv[])
{

    char   op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR ************ \n";
    

    std::cout << "Enter either (+ - * / ): ";
    std::cin  >> op;

    std::cout << "Enter first digit: ";
    std::cin  >> num1;

    std::cout << "Enter second digit: ";
    std::cin  >> num2;


    switch(op)
    {
        case '+':
            std::cout << num1 + num2 << "\n";
            break;

        case '-':
            std::cout << num1 - num2 << "\n";
            break;

        case '*':
            std::cout << num1 * num2 << "\n";
            break;

        case '/':
            std::cout << num1 / num2 << "\n";
            break;

        default:
            std::cout << "Wrong Input BRATHAA! \n";
    };

    std::cout << "************************************ \n";

    return 0;
};
