#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"

#include <iostream>
#include <sstream>
#include <string>
#include <ios>
#include <iomanip>
#include <cstdlib>  
#include <typeinfo> 


using namespace std;

class Student
{
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int ageInYears;
	int *daysInCourse;
	DegreeProgram degree;

	// constructors
public:
	Student(); 
	Student(string, string, string, string, int, int*, DegreeProgram);

	// destructor
	~Student();

	// getter methods
	string getStudentID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getAge() const;
	int *getDaysInCourse();   
	DegreeProgram getDegreeProgram() const;

	// accessor methods
	void setStudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int ageInYears);
	void setDaysInCourse(int *days_in_course);
	void setDegreeProgram(DegreeProgram degree);

	// prints task builder info
public:
     void ozobiaPrint();
	 void print();
	 string convertEnumToString(DegreeProgram degree);
};

#endif
