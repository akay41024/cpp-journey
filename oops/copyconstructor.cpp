#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Parameterized constructor
    Teacher(string name, double salary, string subject, string dept)
    {
        this->name = name;
        this->salary = salary;
        this->subject = subject;
        this->dept = dept;
    }

    // Copy constructor
    Teacher(Teacher &orgObj){
        cout << "Copy constructor called" << endl;
        name = orgObj.name;
        salary = orgObj.salary;
        subject = orgObj.subject;
        dept = orgObj.dept;
    }

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
    }
};

int main()
{
    Teacher t1("Mr. Aasif", 50000, "OOPS", "CSE"); // TODO constructor is called here automatically
    Teacher t2 = t1; // TODO default copy constructor is called here automatically

    t2.getInfo();
    return 0;
}