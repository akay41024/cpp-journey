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
    // Non-parameterized constructor
    Teacher()
    {
        dept = "CSE";
    }

    // Parameterized constructor

    Teacher(string name, double salary, string subject, string dept)
    {
        this->name = name;
        this->salary = salary;
        this->subject = subject;
        this->dept = dept;
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

    t1.getInfo();

    return 0;
}