#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include "degree.h"

using namespace std;

//DegreeProgram Course; 

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int ageInYears;
    // the days below need to be in an array???
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degree;

public:
    // constructors
    Student(); 
    Student(string, string, string, string, int, int, int, int, DegreeProgram);

    // getter methods

    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    
    int getDaysInCourse1() const;  // the days below need to be in an array???
    int getDaysInCourse2() const;
    int getDaysInCourse3() const;
    DegreeProgram getDegreeProgram() const;
    

    // accessor methods

    void setStudentID(string ID);
    void setFirstName(string fName);
    void setLastName(string lName);
    void setEmailAddress(string email);
    void setAge(int age);
    void setDaysInCourse1(int days1);
    void setDaysInCourse2(int days2);
    void setDaysInCourse3(int days3);
    void setDegreeProgram(DegreeProgram deg);


    // temporary print method: needs specific student data
    // roster class will have a special print method

    void print() const; 
};

#endif
