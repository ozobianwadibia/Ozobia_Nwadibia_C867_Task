#pragma once


#ifndef ROSTER_H
#define ROSTER_H

#include "degree.h"
#include "student.h"

using namespace std;



class Roster
{
private:

public:
    // constructor
    Roster();

    // destructor
    ~Roster();

 
   // the student object array
    Student *classRosterArray[5];

    // main functions
    Student add(string, string, string, string, int, int, int, int, DegreeProgram);
    void printAll();
    void printInvalidEmails();
    void printAverageDaysInCourse(string);
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void remove(string);
    void setWidth(string);
};

#endif


