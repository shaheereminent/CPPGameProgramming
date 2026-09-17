#include <iostream>
#include <vector>

int main(int argc, char * argv[]) 
{

    int a = 42;
    int b = 10;
    std::string first = "Shaheer";
    std::string last  = "Inayat Ali";
    std::string name  = first + " " + last;
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(10); 
  
    for (size_t i=0; i<vec.size(); i++)
    {
        std::cout << "This is loop "<< vec[i] << "\n";
    }

    for (auto& a : vec) 
    {
        std::cout << "this is range based loop "<< a << "\n";
    }

    std::cout << "This is vector" << vec[0] << std::endl;
    std::cout << vec[1] << "\n";
    std::cout << first << " " << last << std::endl;
    std::cout << (a + b) << std::endl;
    std::cout << a << " " << b << std::endl;
    std::cout << "Hello, World!" << std::endl;
    std::cout << name << std::endl;

    return 0;
};
