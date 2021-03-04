#pragma once


#ifndef ROSTER_H
#define ROSTER_H

#include "degree.h"
#include "student.h"

#include <iostream>
#include <string>
#include <ios>
#include <iomanip>

using namespace std;



class Roster
{
private:

public:
    // constructor
    Roster();

    // destructor
    ~Roster();

 
    // the student objects
   // the static member is available to all objects!
    Student *classRosterArray[5];

    // main functions
    //string* parse(string row);
    Student add(string, string, string, string, int, int, int, int, DegreeProgram);
    void printAll();
    void printInvalidEmails();
    void printAverageDaysInCourse(string);
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void remove(string);

    // helper functions
    //DegreeProgram stringsToEnum(const string& degStrings);
};

#endif


