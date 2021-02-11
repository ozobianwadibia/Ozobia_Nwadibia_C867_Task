
#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"


int main() 
{
    // used for the enum manipulation
    const string degreeTypes[] = { "SECURITY","NETWORK","SOFTWARE" };
    // casting example using above
    //degreeTypes[(int)ozobia.getDegreeProgram()]

    // the student data to be manipulated
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Ozobia,Nwadibia,hero_47@live.com,41,29,30,25,SOFTWARE" };

    string* pStudentsInRoster[5];
   
    cout << studentData[4] << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    // the Ozobia object!!
    // initial print
    Student Ozobia_Nwadibia;
    Ozobia_Nwadibia.print();
    cout << "-------------------------------------------------------------------------" << endl;

    // instance of roster class
    Roster classRoster;

    // prints all the students
    classRoster.printAll();

    classRoster.printInvalidEmails();
    //loop through classRosterArray and for each element:
    classRoster.printAverageDaysInCourse("student id");
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3"); // student was not found!!!






    return 0;
}

