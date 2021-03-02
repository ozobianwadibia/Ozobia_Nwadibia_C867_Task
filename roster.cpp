
#include "roster.h"
#include "student.h"

Student::Student(string ID, string fName, string lName, string email, int age, int* daysIC, DegreeProgram deg) {

    studentID = ID;
    firstName = fName;
    lastName = lName;
    emailAddress = email;
    ageInYears = age;
    // allocating memory to the dynamic array
    daysIC = new int[3];
    daysInCourse[0] = daysIC[0];
    daysInCourse[1] = daysIC[1];
    daysInCourse[2] = daysIC[2];

    degree = deg;
}



// enums to strings
string Roster::convertEnumToString(DegreeProgram degree) {
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


DegreeProgram Roster:: stringsToEnum(const string& degStrings)
{
    if (degStrings == "SECURITY")
        return SECURITY;
    else if (degStrings == "NETWORK")
        return NETWORK;
    else if (degStrings == "SOFTWARE")
        return SOFTWARE;
}


//Student* classRosterArray[5];
//classRosterArray[0] = Student stu1;
//-------------------------------------------------------------------//
// constructor
Roster::Roster(){}

// destructor
Roster::~Roster(){}


string* Roster::parse(string row) {
    const int ROW_SIZE = 9;
    string* tempArray = new string[ROW_SIZE];
    int i = 0;

    stringstream rowStream(row); //create string stream from the string
    while (rowStream.good())
    {
        string substr;
        getline(rowStream, substr, ','); //get first string delimited by comma
        tempArray[i] = substr;
        i++;
    }

    return tempArray;
}

 Roster::add(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg)
{

    string studentID = ID;
    string firstName = fName;
    string lastName = lName;
    string emailAddress = email;
    int ageInYears = age;
    int *daysIC = new int[3];
    daysIC[0] = days1;
    daysIC[1] = days2;
    daysIC[2] = days3;

    DegreeProgram degree = deg;

    return;
}


	



void Roster::remove(string ID)
{
	/*if (studentID == ID) {
	}*/
	
}
// to work with the method below!!!
void Roster::printAll() {
   /* for (int i = 0; i < 1; i++)
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
    }*/
}

// print method to work with printAll() method
//void Roster::print() {
//	cout << studentID << "\t" << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << ageInYears << "\t" << "daysInCourse: " << daysInCourse << "\t" << "Degree Program: " << degree << endl;
//}

void Roster::printAverageDaysInCourse(string ID)
{

}
void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{

}

