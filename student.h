#pragma once

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include "degree.h"

using std::cout;
using std::string;
using std::endl;


class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int ageInYears;
   /* int daysInCourse[3];*/   
    DegreeProgram degree;

public:
    // constructors
    Student();
    Student(string, string, string, string, int, DegreeProgram);

    // getter methods

    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    
   /* int getDaysInCourse1() const;  
    int getDaysInCourse2() const;
    int getDaysInCourse3() const;*/

    DegreeProgram getDegreeProgram() const;
    
    // accessor methods

    void setStudentID(string ID);
    void setFirstName(string fName);
    void setLastName(string lName);
    void setEmailAddress(string email);
    void setAge(int age);

    /*void setDaysInCourse1(int days1);
    void setDaysInCourse2(int days2);
    void setDaysInCourse3(int days3);*/

    void setDegreeProgram(DegreeProgram deg);


    // prints specific student data
    void print() const; 
};

#endif
