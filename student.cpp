
#include "student.h"


/*CONSTRUCTORS*/
Student::Student(){}

Student::Student(string ID, string fName, string lName, string email, int age, int *daysIC, DegreeProgram deg) {

	studentID = ID;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	ageInYears = age;
	// allocating memory to the dynamic array
	daysIC = new int[3];
	daysInCourse[0] = daysIC[0];
	daysInCourse[1] = daysIC[1];
	daysInCourse[2] = daysIC[2];

	degree = deg;
}

// destructor
Student::~Student() {}

// GETTERS

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


int *Student::getDaysInCourse() {
		return daysInCourse;
}


DegreeProgram Student::getDegreeProgram() const {
	return degree;
}
/****************************************************************/
// SETTERS
 
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

void Student::setDaysInCourse(int *days_in_course) {
	daysInCourse = days_in_course;
	return;
}

void Student::setDegreeProgram (DegreeProgram deg) {
	degree = deg;
	return;
}

/*****************************************************************/
//print personal info
void Student::ozobiaPrint(){
	const string courseTitle = "C867 - Scripting and Programming: Applications";
	const string programmingLanguage = "C++";
	const string wguStudentID = "000341262";
	const string studentName = "Ozobia Nwadibia";

	cout << setfill(' ') << setw(23) << "Course Title: \t" << courseTitle << endl;
	cout << "Programming Language: \t" << programmingLanguage << endl;
	cout << setfill(' ') << setw(23) << "Student ID: \t" << wguStudentID << endl;
	cout << setfill(' ') << setw(23) << "Name: \t" << studentName << endl << endl;
}



