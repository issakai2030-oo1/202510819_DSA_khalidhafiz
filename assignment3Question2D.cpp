#include "assignment3Question2a.h"

Student students[100];
int countStudents = 0;

void addStudent()
{
    cout << "\nEnter Student ID: ";
    cin >> students[countStudents].id;

    cout << "Enter Student Name: ";
    cin >> students[countStudents].name;

    cout << "Enter Student Age: ";
    cin >> students[countStudents].age;

    cout << "Enter Student Course: ";
    cin >> students[countStudents].course;

    countStudents++;

    cout << "Student added successfully.\n";
}

// Display All Students
void displayStudents()
{
    if (countStudents == 0)
    {
        cout << "\nNo students available.\n";
        return;
    }

    cout << "\nStudent List:\n";

    for (int i = 0; i < countStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
    }
}

// Search Student
void searchStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to search: ";
    cin >> id;

    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].id == id)
        {
            cout << "\nStudent Found:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

// Update Student
void updateStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to update: ";
    cin >> id;

    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].id == id)
        {

            cout << "Enter New Name: ";
            cin >> students[i].name;

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Course: ";
            cin >> students[i].course;

            cout << "Student updated successfully.\n";

            found = true;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}

// Delete Student
void deleteStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < countStudents; i++)
    {
        if (students[i].id == id)
        {

            for (int j = i; j < countStudents - 1; j++)
            {
                students[j] = students[j + 1];
            }

            countStudents--;

            cout << "Student deleted successfully.\n";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found.\n";
    }
}