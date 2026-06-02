#include <iostream>
using namespace std;

// ================= HISTORY CHAPTERS =================

void originOfCpp()
{
    cout << "\n===== Chapter 1: Origin of C++ =====\n";
    cout << "C++ was created by Bjarne Stroustrup in 1979 at Bell Labs.\n";
    cout << "It began as an extension of the C programming language.\n";
    cout << "The language was originally called 'C with Classes'.\n";
}

void developmentOfCpp()
{
    cout << "\n===== Chapter 2: Development of C++ =====\n";
    cout << "C++ was developed to support Object-Oriented Programming.\n";
    cout << "Features such as classes, inheritance, polymorphism,\n";
    cout << "encapsulation and abstraction were introduced.\n";
}

void evolutionOfCpp()
{
    cout << "\n===== Chapter 3: Evolution of C++ =====\n";
    cout << "Evolution of Programming Languages:\n\n";

    cout << "BCPL\n";
    cout << " |\n";
    cout << " v\n";
    cout << " B\n";
    cout << " |\n";
    cout << " v\n";
    cout << " C\n";
    cout << " |\n";
    cout << " v\n";
    cout << " C with Classes\n";
    cout << " |\n";
    cout << " v\n";
    cout << " C++\n\n";

    cout << "Major Standards:\n";
    cout << "C++98, C++03, C++11, C++14,\n";
    cout << "C++17, C++20 and C++23.\n";
}

// ================= LEARNING CHAPTERS =================

void dataTypes()
{
    cout << "\n===== Data Types =====\n";
    cout << "Common data types in C++:\n\n";
    cout << "int      -> Integer numbers\n";
    cout << "float    -> Decimal numbers\n";
    cout << "double   -> Double precision decimals\n";
    cout << "char     -> Single character\n";
    cout << "bool     -> True or False\n";
    cout << "string   -> Text values\n";
}

void controlFlow()
{
    cout << "\n===== Control Flow =====\n";
    cout << "Control flow statements determine program execution.\n\n";
    cout << "1. if statement\n";
    cout << "2. if-else statement\n";
    cout << "3. nested if\n";
    cout << "4. switch-case statement\n";
}

void loops()
{
    cout << "\n===== Loops =====\n";
    cout << "Loops are used to repeat instructions.\n\n";
    cout << "1. for loop\n";
    cout << "2. while loop\n";
    cout << "3. do-while loop\n";
}

void arrays()
{
    cout << "\n===== Arrays =====\n";
    cout << "An array stores multiple values of the same type\n";
    cout << "under one variable name.\n\n";

    cout << "Example:\n";
    cout << "int numbers[5] = {10,20,30,40,50};\n";
}

void fileStreams()
{
    cout << "\n===== File Streams =====\n";

    cout << "File handling allows data to be stored and read from files.\n\n";

    cout << "ifstream  -> Read data from a file\n";
    cout << "ofstream  -> Write data to a file\n";
    cout << "fstream   -> Read and write data\n\n";

    cout << "Example:\n\n";

    cout << "#include <fstream>\n\n";
    cout << "ifstream file(\"data.txt\");\n";
    cout << "string line;\n\n";
    cout << "while(getline(file, line))\n";
    cout << "{\n";
    cout << "    cout << line << endl;\n";
    cout << "}\n";
}

// ================= MENUS =================

void historyMenu()
{
    int choice;

    do
    {
        cout << "\n========== HISTORY OF C++ ==========\n";
        cout << "1. Origin of C++\n";
        cout << "2. Development of C++\n";
        cout << "3. Evolution of C++\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            originOfCpp();
            break;

        case 2:
            developmentOfCpp();
            break;

        case 3:
            evolutionOfCpp();
            break;

        case 4:
            cout << "\nReturning to Main Menu...\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
        }

    } while (choice != 4);
}

void learnMenu()
{
    int choice;

    do
    {
        cout << "\n========== LEARN ABOUT C++ ==========\n";
        cout << "1. Data Types\n";
        cout << "2. Control Flow\n";
        cout << "3. Loops\n";
        cout << "4. Arrays\n";
        cout << "5. File Streams\n";
        cout << "6. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            dataTypes();
            break;

        case 2:
            controlFlow();
            break;

        case 3:
            loops();
            break;

        case 4:
            arrays();
            break;

        case 5:
            fileStreams();
            break;

        case 6:
            cout << "\nReturning to Main Menu...\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
        }

    } while (choice != 6);
}

// ================= MAIN PROGRAM =================

int main()
{
    int choice;

    do
    {
        cout << "\n**************************************\n";
        cout << "      Foundations and History of C++\n";
        cout << "****************************************\n";
        cout << "1. History of C++\n";
        cout << "2. Learn About C++\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            historyMenu();
            break;

        case 2:
            learnMenu();
            break;

        case 3:
            cout << "\nThank you for using the program.\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}