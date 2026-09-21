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

    std::string getFirst() const
    {
        return m_first;
    };

    std::string getLast()  const
    {
        return m_last;
    };

    int getID()            const
    {
        return m_id;
    };

    float getAvg()         const
    {
        return m_avg;
    };

    void print()           const
    {
        std::cout << m_first << " " << m_last << " ";
        std::cout << m_id    << " " << m_avg  << "\n"; 
    };


}; // student class ends here


class Course 
{
    std::string m_name = "Course";
    std::vector<Student> m_students;

public:

    Course() {};

    Course(const std::string& name)
          : m_name (name) 
    {};

    void addStudent(const Student& s)
    {
        m_students.push_back(s);
    };

    const std::vector<Student>& getStudents() const
    {
        return m_students;
    };

    void print() const
    {
        for (const auto& s : m_students)
        {
            s.print();
        };

    };

}; // course class ends here

int main(int argc, char * argv[]) 
{

    Student s1;
    Student s2("Shaheer", "Inayat Ali", 5, 501.0);
    Student s3("Aidah", "Shaheer", 6, 600.0);

    Course comp4300("COMP 4300");
    comp4300.addStudent(s1);
    comp4300.addStudent(s2);
    comp4300.addStudent(s3);
    comp4300.addStudent(Student("Billy", "BOB", 3, 50.0));

    comp4300.print();

    return 0;
};
