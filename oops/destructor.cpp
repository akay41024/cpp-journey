#include <iostream>
#include <string>

using namespace std;
//TODO deep copy example using pointers
class Student
{
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    ~Student(){
        cout << "Destructor called" << endl;
        delete cgpaPtr;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Mr. Aasif", 8.5);
    s1.display();
    return 0;
}