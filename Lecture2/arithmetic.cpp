#include <iostream>

int main(int argc, char * argv[] )
{
    
    int score     = 8;
    int questions = 10;

    double percentage  = score/(double)questions * 100;
    
    std::cout << percentage << "%"  << "\n";
     
    return 0;
};
