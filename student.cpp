#include <iostream>
#include <string>
#include "student.h"


/*CONSTRUCTORS*/
Student::Student() {}
Student::Student(string ID, string fName, string lName, string email, int age, DegreeProgram deg) {
	studentID = ID;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	ageInYears = age;
	degree = deg;
}


// getters

string Student::getStudentID() const {
	return studentID;
}

string Student::getFirstName() const {
	return firstName;
}
string Student::getLastName() const {
	return lastName;
}

string Student::getEmailAddress() const {
	return emailAddress;
}

int Student::getAge() const {
	return ageInYears;
}

//int Student::getDaysInCourse1() const {
//	return daysInCourse[0];
//}
//
//int Student::getDaysInCourse2() const {
//	return daysInCourse[1];
//}
//
//int Student::getDaysInCourse3() const {
//	return daysInCourse[2];
//}

DegreeProgram Student::getDegreeProgram() const {
	return degree;
}
/****************************************************************/
// setters
 
void Student::setStudentID(string ID) {
	studentID = ID;
	return;
}

void Student::setFirstName(string fName) {
	firstName = fName;
	return;
}

void Student::setLastName(string lName) {
	lastName = lName;
	return;
}


void Student::setEmailAddress(string email) {
	emailAddress = email;
	return;
}


void Student::setAge(int age) {
	ageInYears = age;
	return;
}

//void Student::setDaysInCourse1(int days1) {
//	daysInCourse[0] = days1;
//	return;
//}
//
//void Student::setDaysInCourse2(int days2) {
//	daysInCourse[1] = days2;
//	return;
//}
//
//void Student::setDaysInCourse3(int days3) {
//	daysInCourse[2] = days3;
//	return;
//}

void Student::setDegreeProgram (DegreeProgram deg) {
	degree = deg;
	return;
}

/*****************************************************************/
/*PRINT*/
void Student::print() const {
	string courseTitle = "Scripting and Programming, C867";
	string programmingLanguage = "C++";
	int wguStudentID = 652365412;
	string studentName = "Ozobia Nwadibia";

	cout << "Course Title: \t\t" << courseTitle << endl;
	cout << "Programming Language: \t" << programmingLanguage << endl;
	cout << "Student ID: \t\t" << wguStudentID << endl;
	cout << "Name: \t\t\t" << studentName << endl;
}


