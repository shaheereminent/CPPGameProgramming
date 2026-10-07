#include <iostream>

int main (int argc, char * argv[])
{


    // continue from 50:00

    // declaring name and age variable
    std::string name;
    int         age;


    // taking user name
    std::cout << "Enter your name: ";
    //std::cin  >> name;
    std::getline(std::cin, name);

    
    // taking user age via input
    std::cout << "Enter your age: ";
    std::cin  >> age;


    // printing output to the terminal
    std::cout << "Hello" << " " << name << " " << "you are" << " " << age << " " << "years old!✨";

    return 0;
};
