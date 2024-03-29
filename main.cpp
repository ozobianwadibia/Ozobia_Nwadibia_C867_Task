
#include "roster.h"

// helper method that converts strings to enum
DegreeProgram stringsToEnum(const string& degStrings)
{
    if (degStrings == "SECURITY")
        return SECURITY;
    else if (degStrings == "NETWORK")
        return NETWORK;
    else if (degStrings == "SOFTWARE")
        return SOFTWARE;
}

// helper method that parses strings
string* parse(string row) {
    const int ROW_SIZE = 9;
    string* tempArray = new string[ROW_SIZE];
    int i = 0;

    stringstream rowStream(row); 
    while (rowStream.good())
    {
        string substr;
        getline(rowStream, substr, ','); 
        tempArray[i] = substr;
        i++;
    }

    return tempArray;
}


// main program
int main()
{
   // C867 student object
    Student ocn;
    ocn.ozobiaPrint();
    cout << setfill('-') << setw(100) << "" << endl << endl;

    // the student data
   const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Ozobia,Nwadibia,hero_47@live.com,41,29,30,25,SOFTWARE" };

    // size of the studentData array
    const int studentDataSize = sizeof(studentData) / sizeof(studentData[0]); 

    // instance of roster class
    Roster classRoster;

    // adding studentData to classRoster &
    // populating the classRosterArray with student objects
    for (int i = 0; i < studentDataSize; i++)
    {
        classRoster.classRosterArray[i] = new Student(classRoster.add(
            parse(studentData[i])[0],
            parse(studentData[i])[1],
            parse(studentData[i])[2],
            parse(studentData[i])[3],
            stoi(parse(studentData[i])[4]),
            stoi(parse(studentData[i])[5]),
            stoi(parse(studentData[i])[6]),
            stoi(parse(studentData[i])[7]),
            stringsToEnum(parse(studentData[i])[8])));
    
        switch (i)
        {
        case 0:
            cout << "1st student added..." << endl;
            break;
        case 1:
            cout << "2nd student added..." << endl;
            break;
        case 2:
            cout << "3rd student added..." << endl;
            break;
        case 3:
            cout << "4th student added..." << endl;
            break;
        case 4:
            cout << "5th student added..." << endl;
            break;
        default:
            cout << "Invalid Student!" << endl;
        }
       
    }
    cout << endl;
    

    //-------------------------------------------------------------//
    
    // prints all the students
    classRoster.printAll();
    cout << endl;
    // prints invalid emails
    classRoster.printInvalidEmails();
    // prints average number of days for specified student
    classRoster.printAverageDaysInCourse("A4");
    // prints degree by program
    classRoster.printByDegreeProgram(SECURITY);
    cout << endl;
    // removes specified student from the list
    classRoster.remove("A2");
    cout << endl;
    classRoster.printAll();
    cout << endl;
    classRoster.remove("A2"); 
   

    return 0;
}

