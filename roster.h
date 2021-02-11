#pragma once


#ifndef ROSTER_H_
#define ROSTER_H_

#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using std::cout;
using std::string;
using std::endl;

class Roster
{
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int ageInYears;
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degree;
   
public:
    void add(string, string, string, string, int, int, int, int, DegreeProgram);
    void remove(string);
    void printAll();
    void printAverageDaysInCourse(string);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

};

#endif

