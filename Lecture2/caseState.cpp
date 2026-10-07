#include <iostream>

int main(int argc, char * argv[])
{
    
    char grade;

    std::cout << "Please enter your grade: ";
    std::cin  >> grade;

    switch(grade)
    {
        case 'A':
            std::cout << "You did great! \n";
            break;
        case 'B':
            std::cout << "You did good! \n";
            break;
        case 'C':
            std::cout << "You did okay! \n";
            break;
        case 'D':
            std::cout << "You did not do  good! \n";
        default:
            std::cout << "Choose from A to D \n";
    };

    
    return 0;
};
