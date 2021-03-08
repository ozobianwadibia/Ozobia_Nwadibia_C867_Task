
#include "roster.h"
#include "student.h"

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

// destructor
Roster::~Roster() {}

// second constructor
 Student Roster::add(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg)
 {
    int *daysIC = new int[3];
    daysIC[0] = days1;
    daysIC[1] = days2;
    daysIC[2] = days3;
    
    return Student(ID, fName, lName, email, age, daysIC, deg);
}

 // method that remove a student based on ID
void Roster::remove(string ID)
{  
    // use new array to hold left overs!!!
    Student* tempArray[4];
    int j = 0;
    bool present = false; // or false
    int size = sizeof(classRosterArray) / sizeof(classRosterArray[0]);
   
    for (int i = 0; i < size; i++) {
        if (classRosterArray[i]->getStudentID() != ID) {
            tempArray[j] = classRosterArray[i];
            j++;

            //// If x found in array 
            //if (i < size)
            //{
            //    // reduce size of array and move all 
            //    // elements on space ahead 
            //    size = size - 1;
            //    for (int j = i; j < size; j++)
            //        classRosterArray[j] = classRosterArray[j + 1];
            //        //classRosterArray[size - 1] = {};
            //}
        }
    }
    cout << "Student ID " << ID << " has been successfully deleted!!!" << endl;
    
    for (int i = 0; i < 4; i++) {
        classRosterArray[i] = tempArray[i];
    }

    for (int i = 0; i < 4; i++) {
        cout << classRosterArray[i]->getStudentID() << " ";
    }
           /* else  {
                cout << "Student ID " << ID << ": is not available" << endl;
            }*/
             
}

// print method that displays all the students
void Roster::printAll() {
    for (int i = 0; i < (sizeof(classRosterArray) / sizeof(classRosterArray[0])); i++) {
        classRosterArray[i]->print();
    } 
}

// print method that displays average number 
// of days in a course based on ID
void Roster::printAverageDaysInCourse(string ID)
{
    int average = 0;
    int divisor = 3;
    
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() == ID) {
            average += (classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2]) / divisor;
        }
    }
    // TODO: fix the output
    cout << "The average number of days in course for student "<< ID << " is: " << average << endl;
}


// prints a list of invalid student emails
void Roster::printInvalidEmails() {  
    cout << "The Invalid Student Emails are: " << endl;
    for (int i = 0; i < 5; i++) {

        size_t space = classRosterArray[i]->getEmailAddress().find(' ');
        if (space != string::npos)
        {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(has a space)" << endl;
        }
        size_t at = classRosterArray[i]->getEmailAddress().find('@');
        if (at == string::npos) {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(missing the '@' symbol)" << endl;
        }
        size_t dot = classRosterArray[i]->getEmailAddress().find('.', at + 1);
        if (dot == string::npos)
        {
            cout << classRosterArray[i]->getEmailAddress() << "\t\t" << "(missing the '.' symbol after @)" << endl;
        }
    }

    cout << endl;
}


// prints students in a specified degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    cout << "Student(s) who are in this Degree Program : "<<"["<< enumToDegreeString(degreeProgram) <<"]"<< ", are printed below: " << endl;
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}


