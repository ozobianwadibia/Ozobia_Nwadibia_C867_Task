#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

void Roster::add(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg)
{
	studentID = ID;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	ageInYears = age;
	daysInCourse1 = days1;
	daysInCourse2 = days2;
	daysInCourse3 = days3;
	degree = deg;
}

void Roster::remove(string ID)
{
	/*if (studentID == ID) {
		
	}*/
	
}

void Roster::printAll()
{
	
}

void Roster::printAverageDaysInCourse(string ID)
{

}
void Roster::printInvalidEmails()
{

}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{

}
