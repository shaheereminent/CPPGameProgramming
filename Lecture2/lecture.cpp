#include <iostream>
#include <vector>


class Student
{
    std::string m_first = "First";
    std::string m_last  = "Last";
    int         m_id    = 0;
    float       m_avg   = 0;

public:

    Student() {};
    
    Student(std::string first, std::string last, int id, float avg)
        : m_first  (first)
        , m_last   (last)
        , m_id     (id)
        , m_avg    (avg)
    {};

    std::string getFirst()
    {
        return m_first;
    };

    std::string getLast()
    {
        return m_last;
    };

    int getID()
    {
        return m_id;
    };

    float getAvg()
    {
        return m_avg;
    };


};

int main(int argc, char * argv[]) 
{

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

    std::cout << "Below default class is being initialized" << std::endl;

    Student s1;

    std::cout << s1.getFirst() << std::endl;

    std::cout << "Below parametrized class is being initialized" << std::endl;

    Student s2("Shaheer", "Inayat Ali", 1, 203.1);

    std::cout << s2.getFirst() << std::endl;
 
    std::cout << s2.getAvg() << std::endl;

    return 0;
};
