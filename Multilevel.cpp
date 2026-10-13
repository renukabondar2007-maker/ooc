#include <iostream>
#include <string>

using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudentDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudentDetails()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};


// Derived class 1
class StudentExam : public Student
{
protected:
    float math;
    float physics;
    float chemistry;

public:
    void getExamMarks()
    {
        cout << "Enter Math marks: ";
        cin >> math;

        cout << "Enter Physics marks: ";
        cin >> physics;

        cout << "Enter Chemistry marks: ";
        cin >> chemistry;
    }

    void displayExamMarks()
    {
        cout << "Math: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
    }
};


// Derived class 2
class StudentResult : public StudentExam
{
private:
    float total;
    float percentage;

public:
    void calculateResult()
    {
        total = math + physics + chemistry;
        percentage = total / 3;
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----" << endl;

        displayStudentDetails();

        cout << "\nMarks:" << endl;
        displayExamMarks();

        cout << "\nTotal Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};


int main()
{
    StudentResult student;

    student.getStudentDetails();
    student.getExamMarks();

    student.calculateResult();

    student.displayResult();

    return 0;
}
