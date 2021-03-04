
#include "roster.h"
#include "student.h"


// constructor
Roster::Roster() {}

// destructor
Roster::~Roster() {}

//Student Roster::classRosterArray = new Student[5];

 
//DegreeProgram Roster:: stringsToEnum(const string& degStrings)
//{
//    if (degStrings == "SECURITY")
//        return SECURITY;
//    else if (degStrings == "NETWORK")
//        return NETWORK;
//    else if (degStrings == "SOFTWARE")
//        return SOFTWARE;
//}



//string* Roster::parse(string row) {
//    const int ROW_SIZE = 9;
//    string* tempArray = new string[ROW_SIZE];
//    int i = 0;
//
//    stringstream rowStream(row); //create string stream from the string
//    while (rowStream.good())
//    {
//        string substr;
//        getline(rowStream, substr, ','); //get first string delimited by comma
//        tempArray[i] = substr;
//        i++;
//    }
//
//    return tempArray;
//}



 Student Roster::add(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg)
 {
    int *daysIC = new int[3];
    daysIC[0] = days1;
    daysIC[1] = days2;
    daysIC[2] = days3;
    
    return Student(ID, fName, lName, email, age, daysIC, deg);
}



void Roster::remove(string ID)
{
   
}



// print method that displays all the students
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        classRosterArray[i]->print();
    }
}


void Roster::printAverageDaysInCourse(string ID)
{

}



void Roster::printInvalidEmails() {
    /*bool any = false;
    for (int i = 0; i < 5; i++) {
        string badEmail = (Roster::classRosterArray[i]->getEmailAddress());
        if ((badEmail.find(" ", 0) == string::npos) || (badEmail.find('@') == string::npos && badEmail.find('.') == string::npos)) {

            any = true;
            cout << badEmail << ": " << Roster::classRosterArray[i]->getEmailAddress() << std::endl;
        }
    }
    if (!any) cout << "All emails are valid!" << endl;*/
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{

}

