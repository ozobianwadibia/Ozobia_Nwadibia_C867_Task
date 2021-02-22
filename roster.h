#pragma once


#ifndef ROSTER_H
#define ROSTER_H

#include "degree.h"

#include <iostream>
#include <string>
#include <ios>
#include <iomanip>

using namespace std;

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

