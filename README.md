## Student Roster Sheet

## WGU-C867 Student Roster C++

---

The following was a class project for the course named above. You will find below the requirements for the project.

---

<strong>SCENARIO</strong>: You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the
next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.</p>

<p>You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an
array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the
requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.</p>
<h3>REQUIREMENTS</h3>
<ol type="A">
<li>Modify the “studentData Table” to include your personal information as the last item.</li>
<li>Create a C++ project in your integrated development environment (IDE) with the following files:
<ul>
<li>degree.h</li>
<li>student.h</li>
<li>roster.h</li>
<li>student.cpp</li>
<li>roster.cpp</li>
<li>main.cpp</li>
</ul>
</li>
<p>Note: There must be a total of six source code files.</p>
<li>Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.</li>
<p>Note: This information should be included in the degree.h file.</p>
<li>For the Student class, do the following:
<ol>
<li>Create the class Student in the files student.h and student.cpp, which includes each of the following variables:
<ul>
<li>student ID</li>
<li>first name</li>
<li>last name</li>
<li>email address</li>
<li>age</li>
<li>array of number of days to complete course</li>
<li>degree program</li>
</ul>
</li>
<li>Create each of the following functions in the Student class:
<ol type="a">
<li>an accessor (i.e., getter) for each instance variable from part D1</li>
<li>a mutator (i.e., setter) for each instance variable from part D1</li>
<li>All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.</li>
<li>constructor using all of the input parameters provided in the table</li>
<li>print() to print specific student data</li>
</ol>
</li>
</ol>
</li>
<li>Create a Roster class (roster.cpp) by doing the following:
<ol>
<li>Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”</li>
<li>Create a student object for each student in the data table and populate classRosterArray.
<ol type="a">
<li>Parse each set of data identified in the “studentData Table.”</li>
<li>Add each student object to classRosterArray.</li>
</ol>
</li>
<li>Define the following functions:
<ol type="a">
<li>public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) that sets the instance variables from part
D1 and updates the roster.</li>
<li>public void remove(string studentID) that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.</li>
<li>public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The
printAll() function should loop through all the students in classRosterArray and call the print() function for each student.</li>
<li>public void printAverageDaysInCourse(string studentID) that correctly prints a student&rsquo;s average number of days in the three courses. The student is identified by the studentID parameter.</li>
<li>public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.</li>
<p>Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').</p>
<li>public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.</li>
</ol>
</li>
</ol>

</li>
<li>Demonstrate the program&rsquo;s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
<ol>
<li>Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
</li>
<li>Create an instance of the Roster class called classRoster.</li>
<li>Add each student to classRoster.</li>
<li>Convert the following pseudo code to complete the rest of the main() function:
<ul>
<li>classRoster.printAll();</li>
<li>classRoster.printInvalidEmails();</li>
<li>classRoster.printAverageDaysInCourse(/current_object's student id/);</li>
<li>classRoster.printByDegreeProgram(SOFTWARE);</li>
<li>classRoster.remove("A3");</li>
<li>classRoster.printAll();</li>
<li>classRoster.remove("A3");</li>
<p>N.B: the above line should print a message saying such a student with this ID was not found.</p>
</ul>
</li>
<li>Implement the destructor to release the memory that was allocated dynamically in Roster.</li>
</ol>
</li>
<li>Demonstrate professional communication in the content and presentation of your submission.</li>
</ol>
