
#include <iostream>
#include <string>

/**
 * @file student.cpp
 * @brief Student management example using C++
 * 
 * This file demonstrates:
 * - C++ class documentation
 * - Constructors
 * - Member functions
 * - Doxygen comments
 */

using namespace std;

/**
 * @class Student
 * @brief Represents a student with name and marks
 */
class Student {

private:
    string name;
    int marks;

public:

    /**
     * @brief Construct a new Student object
     * 
     * @param studentName Name of student
     * @param studentMarks Marks scored
     */
    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
    }

    /**
     * @brief Displays student details
     */
    void displayDetails() {
        cout << "Student Name : " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }

    /**
     * @brief Checks pass/fail status
     * 
     * @return true Student passed
     * @return false Student failed
     */
    bool isPassed() {
        return marks >= 35;
    }
};

/**
 * @brief Main function
 * 
 * @return int Program exit status
 */
int main() {

    Student s1("Rahul", 78);

    s1.displayDetails();

    if (s1.isPassed()) {
        cout << "Result : Passed" << endl;
    } else {
        cout << "Result : Failed" << endl;
    }

    return 0;
}