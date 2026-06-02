#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct Student
{
    string rollNo;
    string name;
    int age;
};

vector<Student> loadStudents()
{
    vector<Student> students;
    ifstream file("student.txt");

    string line;

    while (getline(file, line))
    {
        stringstream ss(line);

        Student s;
        string ageStr;

        getline(ss, s.rollNo, ',');
        getline(ss, s.name, ',');
        getline(ss, ageStr, ',');

        stringstream convert(ageStr);
        convert >> s.age;

        students.push_back(s);
    }

    file.close();
    return students;
}

void saveStudents(vector<Student> &students)
{
    ofstream file("student.txt");

    for (int i = 0; i < students.size(); i++)
    {
        file << students[i].rollNo << ","
             << students[i].name << ","
             << students[i].age;

        if (i != students.size() - 1)
            file << endl;
    }

    file.close();
}

void displayStudents()
{
    vector<Student> students = loadStudents();

    if (students.empty())
    {
        cout << "\nNo students found.\n";
        return;
    }

    cout << "\n===== STUDENT LIST =====\n";

    for (int i = 0; i < students.size(); i++)
    {
        cout << "Roll Number : " << students[i].rollNo << endl;
        cout << "Name        : " << students[i].name << endl;
        cout << "Age         : " << students[i].age << endl;
        cout << "--------------------------" << endl;
    }
}

void searchStudent()
{
    vector<Student> students = loadStudents();

    string roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    bool found = false;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll Number : " << students[i].rollNo << endl;
            cout << "Name        : " << students[i].name << endl;
            cout << "Age         : " << students[i].age << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent not found.\n";
    }
}

void updateStudent()
{
    vector<Student> students = loadStudents();

    string roll;
    cout << "\nEnter Roll Number to update: ";
    cin >> roll;

    bool found = false;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "Enter New Name: ";
            cin >> students[i].name;

            cout << "Enter New Age: ";
            cin >> students[i].age;

            found = true;
            break;
        }
    }

    if (found)
    {
        saveStudents(students);
        cout << "\nStudent updated successfully.\n";
    }
    else
    {
        cout << "\nStudent not found.\n";
    }
}

void deleteStudent()
{
    vector<Student> students = loadStudents();
    vector<Student> newList;

    string roll;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    bool found = false;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].rollNo == roll)
        {
            found = true;
        }
        else
        {
            newList.push_back(students[i]);
        }
    }

    if (found)
    {
        saveStudents(newList);
        cout << "\nStudent deleted successfully.\n";
    }
    else
    {
        cout << "\nStudent not found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Display All Students\n";
        cout << "2. Search Student\n";
        cout << "3. Update Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                displayStudents();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                updateStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
