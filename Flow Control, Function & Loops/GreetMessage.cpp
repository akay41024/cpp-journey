#include<iostream>

using namespace std;

void greetMsg(){
    cout << "Hello, welcome to the program!" << endl;
    cout << "Playing Well" << endl;
}

void exitMsg(){
    cout << "\nThank you for playing! Goodbye." << endl;
    cout << "Bye!!";
}
int main(){
    greetMsg();
    cout<<"Hope you are Enjoying\n";
    exitMsg();
    return 0;
}