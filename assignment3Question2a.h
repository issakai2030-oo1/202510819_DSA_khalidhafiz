#ifndef assignment3Question2a_h
#define assignment3Question2a_h

#include <iostream>
using namespace std;

// Student structure
struct Student
{
    int id;
    string name;
    int age;
    string course;
};

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif