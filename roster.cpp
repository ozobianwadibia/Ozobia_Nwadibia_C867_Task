
#include "roster.h"
#include "student.h"

// method that sets width of underscores
void Roster::setWidth(string comment)
{
    int width = comment.length();
    for (int i = 0; i < width; i++)
    {
        cout << "-";
    }
}

// method that converts enum values to string
string enumToDegreeString(DegreeProgram degreeProgram) {
    switch (degreeProgram) {
    case 0:
        return "SECURITY";
    case 1:
        return "NETWORK";
    case 2:
        return "SOFTWARE";
    default:
        return "Invalid Degree Program!!!";
    }
}

// constructor
Roster::Roster() {}

// second constructor
 Student Roster::add(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg)
 {
    int *daysIC = new int[3];
    daysIC[0] = days1;
    daysIC[1] = days2;
    daysIC[2] = days3;
    
    return Student(ID, fName, lName, email, age, daysIC, deg);
}

 // method that removes a student based on ID
void Roster::remove(string ID)
{  
    cout << "Calling the 'remove' method: " << endl;
    int i;
    for (i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
        string stuID = classRosterArray[i]->getStudentID();
        if (stuID == "") {
            cout << "Specified student ID not found!!!" << endl;
        }
        
        if (classRosterArray[i]->getStudentID() == ID) {
            classRosterArray[i]->setStudentID("");
            cout << "The specified student has been deleted!!!" << endl;
        }
    }
}


// print method that displays all the students
void Roster::printAll() {
    string w1 = "The students in the array: ";
    cout << w1 << endl;
    Roster::setWidth(w1);
    cout << endl;
    for (int i = 0; i < (sizeof(classRosterArray) / sizeof(classRosterArray[0])); i++) {
        string stuID = classRosterArray[i]->getStudentID();
        if (stuID[0] == 'A') {
            classRosterArray[i]->print();
        } 
    } 
}

// print method that displays average number 
// of days in a course based on ID
void Roster::printAverageDaysInCourse(string ID)
{
    int average = 0;
    int divisor = 3;
    
    for (int i = 0; i < (sizeof(classRosterArray) / sizeof(classRosterArray[0])); i++) {
        if (classRosterArray[i]->getStudentID() == ID) {
            average += (classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2]) / divisor;
        }
    }
    
    cout << "The average number of days in course for student ["<< ID << "] is: " << average << endl;
    cout << setfill('-') << setw(60) << "" << endl << endl;
}


// print method that displays invalid student emails
void Roster::printInvalidEmails() { 
    string w1 = "The Invalid Student Emails are: ";
    cout << w1 << endl;
    Roster::setWidth(w1);
    cout << endl;
    for (int i = 0; i < (sizeof(classRosterArray) / sizeof(classRosterArray[0])); i++) {

        size_t spaceSymbol = classRosterArray[i]->getEmailAddress().find(' ');
        if (spaceSymbol != string::npos)
        {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(has a space)" << endl;
        }
        size_t atSymbol = classRosterArray[i]->getEmailAddress().find('@');
        if (atSymbol == string::npos) {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(missing the '@' symbol)" << endl;
        }
        size_t dotSymbol = classRosterArray[i]->getEmailAddress().find('.', atSymbol + 1);
        if (dotSymbol == string::npos)
        {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(missing the '.' symbol after @)" << endl;
        }
    }

    cout << endl;
}


// print method that displays student(s) in a specified degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    cout << "Student(s) who are in this Degree Program : "<<"["<< enumToDegreeString
(degreeProgram) <<"]"<< ", are printed below: " << endl;
    cout << setfill('-') << setw(75) << "" << endl;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}



// destructor
Roster::~Roster() {}
