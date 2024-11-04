#include <iostream>
#include <string>

using namespace std;
// TODO shallow copy example using pointers
// class Student
// {
// public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaPtr << endl;
//     }
// };


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

    Student(Student &orgObj)
    {
        cout << "Copy constructor called" << endl;
        name = orgObj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(orgObj.cgpaPtr);
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

    Student s2 = s1;

    s1.display();
    *(s2.cgpaPtr) = 9.0;
    s1.display();
    s2.display();
    return 0;
}