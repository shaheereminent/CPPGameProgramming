#include <iostream>

int main(int argc, char * argv[]) 
{

    int a = 42;
    int b = 10;
    std::string first = "Shaheer";
    std::string last  = "Inayat Ali";
    std::string name  = first + " " + last; 
   
    std::cout << first << " " << last << std::endl;
    std::cout << (a + b) << std::endl;
    std::cout << a << " " << b << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << name << std::endl;

    return 0;
};
