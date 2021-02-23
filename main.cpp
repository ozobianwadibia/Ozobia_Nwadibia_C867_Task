
#include "student.h"
#include "roster.h"



// casting 
 //degreeTypes[(int)ocn.getDegreeProgram()]
const string degreeTypes[3] = {"SECURITY","NETWORK","SOFTWARE"};

// enums to strings
string convertEnumToString(DegreeProgram degree) {
    switch (degree)
    {
    case SECURITY:
        return "SECURITY";
        break;
    case NETWORK:
        return "NETWORK";
        break;
    case SOFTWARE:
        return "SOFTWARE";
        break;
    default:
        return "Invalid degree!";
    }
}

DegreeProgram stringsToEnum(const string& degStrings)
{
    if (degStrings == "SECURITY")
        return SECURITY;
    else if (degStrings == "NETWORK")
        return NETWORK;
    else if (degStrings == "SOFTWARE")
        return SOFTWARE;
}
// main program
int main()
{
   // Student info
    Student ocn;
    ocn.print();
    cout << setfill('-') << setw(70) << "" << endl;

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

    for (int i = 0; i < studentDataSize; i++) {
        cout << studentData[i] << endl;
    }
   
    //cout << *(classRosterArray + 5) << endl;
    //delete[]classRosterArray; (when done with me)
   
    cout << setfill('-') << setw(70) << "" << endl;

    struct Student
    {
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int ageInYears;
        int daysInCourse1;
        int daysInCourse2;
        int daysInCourse3;
        DegreeProgram degree;
    };

    // student objects
    Student a1;
    Student a2;
    Student a3;
    Student a4;
    Student a5;
    //Student a6("A6", "Dorian", "Bools", "KB@yahoo.com", 50, 21,54,56, NETWORK);

    //pointer string array needed here
    Student classRosterArray[5];
    
    


    // for the 'add' function in Roster class
    string delimiter = ",";
    for (int i = 0; i < 5; i++)
    {
        size_t rightSide = studentData[i].find(delimiter);
        classRosterArray[i].studentID = studentData[i].substr(0, rightSide);

        size_t leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].firstName = studentData[i].substr(leftSide, rightSide - leftSide);

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].lastName = studentData[i].substr(leftSide, rightSide - leftSide);

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].emailAddress = studentData[i].substr(leftSide, rightSide - leftSide);

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].ageInYears = atoi(studentData[i].substr(leftSide, rightSide - leftSide).c_str());

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].daysInCourse1 = atoi(studentData[i].substr(leftSide, rightSide - leftSide).c_str());

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].daysInCourse2 = atoi(studentData[i].substr(leftSide, rightSide - leftSide).c_str());

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].daysInCourse3 = atoi(studentData[i].substr(leftSide, rightSide - leftSide).c_str());

        leftSide = rightSide + 1;
        rightSide = studentData[i].find(delimiter, leftSide);
        classRosterArray[i].degree = stringsToEnum(studentData[i].substr(leftSide, rightSide - leftSide));
    }

    // for the display / printall function
    for (int i = 0; i < 5; i++)
    {
        cout << classRosterArray[i].studentID << endl;
        cout << classRosterArray[i].firstName << endl;
        cout << classRosterArray[i].lastName << endl;
        cout << classRosterArray[i].emailAddress << endl;
        cout << classRosterArray[i].ageInYears << endl;
        cout << classRosterArray[i].daysInCourse1 << endl;
        cout << classRosterArray[i].daysInCourse2 << endl;
        cout << classRosterArray[i].daysInCourse3 << endl;
        cout << convertEnumToString(classRosterArray[i].degree) << endl;
        cout << endl;
    }
    
 
    // instance of roster class
    Roster classRoster;
    

    // test run: add method
    classRoster.add("A6", "Jamie", "Sanders", "JMS36@gmail.com", 20, 30, 35, 40, NETWORK);
    classRoster.add("A7", "Janet", "Warthog", "JW96@live.com", 52, 23, 10, 15, SOFTWARE);

    

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

