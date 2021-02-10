
#include <iostream>
#include <string>

#include "student.h";

using namespace std;

int main() 
{
    const string degreeTypes[] = { "SECURITY","NETWORK","SOFTWARE" };
    //DegreeProgram degValue;
    //cout << "So, my degree is: "<< degreeTypes[(int)degValue] << endl << endl;

    Student stu1("A9", "Nigel", "Franks", "hero_47@live.com", 33, 25, 36, 35, SOFTWARE);
    Student stu2("A8", "Gary", "Oldman", "GO@gmail.com", 49, 52, 45, 41, NETWORK);
    
    stu1.print();
    stu2.print();
    cout << endl;

    // casting is taking place here
    cout << "Program: " << degreeTypes[(int)stu1.getDegreeProgram()] << endl;
    cout << "Program: " << degreeTypes[(int)stu2.getDegreeProgram()] << endl;
    

    return 0;
}

