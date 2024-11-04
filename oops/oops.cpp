#include<iostream>
#include<string>

using namespace std;


class Teacher{
    private: 
        double salary;
    public:
        string name;
        string dept;
        string subject;
    
        void changeDept(string newDept){
            dept = newDept;
        }

        void setSalary(double s){
            salary = s;
        }

        void getSalary(){
            cout << "Salary: " << salary << endl;
        }
};


int main(){
    Teacher t1;

    t1.name = "Mr. Aasif";
    t1.dept = "CSE";
    t1.subject = "OOPS";
    t1.setSalary(50000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    t1.getSalary();

    return 0;
}