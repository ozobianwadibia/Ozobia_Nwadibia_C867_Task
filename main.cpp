
#include "student.h"
#include "roster.h"


int main()
{
   // Student (submitter) info
    Student ocn;
    ocn.print();
    cout << setfill('-') << setw(70) << "" << endl;

   // casting 
   //degreeTypes[(int)ocn.getDegreeProgram()]
    const string degreeTypes[3] = { "SECURITY","NETWORK","SOFTWARE" };
   

    //----------------------------------------------------------------//
    // the student data to be manipulated
	
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Ozobia,Nwadibia,hero_47@live.com,41,29,30,25,SOFTWARE" };

    // array size - (5)
    const int studentDataSize = sizeof(studentData) / sizeof(studentData[0]); 

    //the string array using 'auto' keyword
    auto* classRosterArray = new string[5];
		classRosterArray[0] = studentData[0];
		classRosterArray[1] = studentData[1];
		classRosterArray[2] = studentData[2];
		classRosterArray[3] = studentData[3];
		classRosterArray[4] = studentData[4];

    for (int i = 0; i < studentDataSize; i++) {
        cout << classRosterArray[i] << endl;
    }
   
    //cout << *(classRosterArray + 5) << endl;
    //delete[]classRosterArray; (when done with me)
   
    cout << setfill('-') << setw(70) << "" << endl;

    // the student objects
    Student a1;
    Student a2;
    Student a3;
    Student a4;
    //Student a5("A6", "Dorian", "Bools", "KB@yahoo.com", 50, { 21,54,56 }, NETWORK);

 

    // instance of roster class
    Roster classRoster;

    // test run: add method
    classRoster.add("A6", "Jamie", "Sanders", "JMS36@gmail.com", 20, 30, 35, 40, NETWORK);

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

