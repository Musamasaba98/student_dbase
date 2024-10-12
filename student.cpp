#include "student.h"
#include <iostream>
#include <fstream>
using namespace std;

Student::Student()=default;
Student::Student(int rollNumber, string name, double marks): studentRollNumber(rollNumber), studentName(name), studentMarks(marks) {}
Student::~Student()=default;

void Student::addStudent() {
    ofstream file("students.txt", ios::app);
    // code to add student to database
    cout << "Enter student Name, Roll Number, Marks: ...";
    cin >> studentName >> studentRollNumber >> studentMarks;
    file << studentName << " " << studentRollNumber << " " << studentMarks << endl;
    file.close();
    cout << "Student added successfully!" << endl;
    
}
void Student::displayStudent() {
    // code to display student details
}