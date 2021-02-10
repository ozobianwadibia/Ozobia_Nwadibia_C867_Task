#include <iostream>
#include <string>
#include "student.h"

const string degreeTypes[] = { "SECURITY","NETWORK","SOFTWARE" };

using namespace std;

/*CONSTRUCTORS*/
Student::Student() {}  

Student::Student(string ID, string fName, string lName, string email, int age, int days1, int days2, int days3, DegreeProgram deg) {

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

int Student::getDaysInCourse1() const {
	return daysInCourse1;
}

int Student::getDaysInCourse2() const {
	return daysInCourse2;
}

int Student::getDaysInCourse3() const {
	return daysInCourse3;
}

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

void Student::setDaysInCourse1(int days1) {
	daysInCourse1 = days1;
	return;
}

void Student::setDaysInCourse2(int days2) {
	daysInCourse2 = days2;
	return;
}

void Student::setDaysInCourse3(int days3) {
	daysInCourse3 = days3;
	return;
}

void Student::setDegreeProgram (DegreeProgram deg) {
	degree = deg;
	return;
}

/*****************************************************************/
/*PRINT*/
void Student::print() const {
	cout << "StudentID: " << studentID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Email Address: " << emailAddress << endl;
	cout << "Age: " << ageInYears << endl;
	cout << "Days_Course_One: " << daysInCourse1 << endl;
	cout << "Days_Course_Two: " << daysInCourse2 << endl;
	cout << "Days_Couurse_Three: " << daysInCourse3 << endl;
	cout << "Degree Program: " << degreeTypes[(int)degree] << endl << endl; // casting int to string

}


