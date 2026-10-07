#include <iostream>

// continue from yt timestamp: 23:17 


int main (int argc, char * argv[])
{
    int x; // variable declaration
    x = 5;
    
    float y = 5.1;

    // single characters
    
    char grade   = 'A';
    char initial = 'S';
    
    std::cout << x << "\n";
    std::cout << y << "\n";

    std::cout << initial << "\n";    

    std::string name    = "Shaheer";
    std::string address = "255 fake St.";
    std::string favFood = "Fish";
    std::string current = "Hungry";

    std::cout << "Hi my name is" << " " << name << " " << "I live at" << " " << address << " " << "and i love eating" << " " << favFood  << " " << "because i am always " << current << "\n";


    return 0;
};
