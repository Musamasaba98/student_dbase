#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{
    public:
        Student();
        Student(int rollNumber, string name,double marks);
        ~Student();
        void addStudent();
        void displayStudent();
    protected:
        int studentRollNumber{0};
        string studentName{""};
        double studentMarks{0.0};
};

#endif // STUDENT_H