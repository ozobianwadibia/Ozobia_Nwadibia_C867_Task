
#include "student.h"
#include "roster.h"


// main program
int main()
{
   // C867 student object
    Student ocn;
    ocn.ozobiaPrint();
    cout << setfill('-') << setw(60) << "" << endl;

    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Ozobia,Nwadibia,hero_47@live.com,41,29,30,25,SOFTWARE" };

    // array size - (5)
    const int studentDataSize = sizeof(studentData) / sizeof(studentData[0]); 

    cout << setfill('-') << setw(60) << "" << endl;
    
    // instance of roster class
    Roster classRoster;
  
    for (int i = 0; i < 9; i++) {
        cout << (classRoster.parse(studentData[0])[i]) << endl;
    }
    cout << endl;

 
    for (int i = 0; i < 9; i++)
    {
        cout << (classRoster.parse(studentData[1])[i]) << endl;
    }
    cout << endl;
    /*cout << typeid(stoi(classRoster.parse(studentData[2])[1])).name() << endl;
    cout << typeid(classRoster.stringsToEnum(classRoster.parse(studentData[2])[8])).name();*/

   
    Student classRosterArray[5];
    //classRosterArray = new Student[5];

   /* for (int i = 0; i < 5; i++)
    {
        classRosterArray[i] = classRoster.add(classRoster.parse(studentData[i])[0],
            classRoster.parse(studentData[i])[1],
            classRoster.parse(studentData[i])[2],
            classRoster.parse(studentData[i])[3],
            stoi(classRoster.parse(studentData[i])[4]),
            stoi(classRoster.parse(studentData[i])[5]),
            stoi(classRoster.parse(studentData[i])[6]),
            stoi(classRoster.parse(studentData[i])[7]),
            classRoster.stringsToEnum(classRoster.parse(studentData[i])[8]));
    }*/

 
  
        
        
        /*classRoster.add(classRoster.parse(studentData[0])[0],
        classRoster.parse(studentData[0])[1],
        classRoster.parse(studentData[0])[2],
        classRoster.parse(studentData[0])[3],
        stoi(classRoster.parse(studentData[0])[4]),
        stoi(classRoster.parse(studentData[0])[5]),
        stoi(classRoster.parse(studentData[0])[6]),
        stoi(classRoster.parse(studentData[0])[7]),
        classRoster.stringsToEnum(classRoster.parse(studentData[0])[8]));*/




    

    
    //------------------------------------------------------------------------------------------//
    //------------------------------------------------------------------------------------------//
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

