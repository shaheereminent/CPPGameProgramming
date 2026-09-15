#include <iostream>
#include <vector>

class Student 
{
      std::string m_first = "First";
      std::string m_last  = "Last";
      int 	  m_id    = 0;
      float 	  m_avg   = 0;


public:

        Student() {}

	Student(std::string first, std::string last, int id, float avg)
		: m_first    (first)
		, m_last     (last)
		, m_id       (id)
		, m_avg      (avg)

	{
	}

	float getAvg()
	{
	    return m_avg;
	}

	int getID()
	{
	    return m_id;
	}

	std::string getFirst()
	{
	    return m_first;
	}

	std::string getLast()
	{
	    return m_last;
	}

	void print()
	{
	    std::cout << m_first << " " << m_last << " ";
	    std::cout << m_id << " " << m_avg << "\n";
	};

};

int main(int argc, char * argv[])
{
	Student s1;
	Student s2("Shaheer", "Inayat Ali", 1, 3.14);
	Student s3("Aidah", "Shaheer", 2022001, 33.15);

	std::cout << s3.getLast() << "\n";
	
	s3.print();

	return 0;
}
