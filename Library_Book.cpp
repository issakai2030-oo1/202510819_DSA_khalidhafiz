#include "Library_Book.h"
#include <iostream>
#include <iomanip>


// Default Constructor
LibraryBook::LibraryBook() {
    bookID = 0;
    title = "";
    author = "";
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Parameterized Constructor
LibraryBook::LibraryBook(int id, std::string t, std::string a) {
    bookID = id;
    title = t;
    author = a;
    borrowerName = "";
    daysBorrowed = 0;
    isBorrowed = false;
}

// Destructor
LibraryBook::~LibraryBook() {
    // Displays a message when an object is destroyed as required
    if (bookID != 0) {
        std::cout << "[Destructor] Book ID " << bookID << " (\"" << title << "\") object destroyed.\n";
    }
}

// Getters
int LibraryBook::getBookID() const { return bookID; }
std::string LibraryBook::getTitle() const { return title; }
std::string LibraryBook::getAuthor() const { return author; }
std::string LibraryBook::getBorrowerName() const { return borrowerName; }
int LibraryBook::getDaysBorrowed() const { return daysBorrowed; }
bool LibraryBook::getBorrowStatus() const { return isBorrowed; }

// Setters
void LibraryBook::setBookID(int id) { bookID = id; }
void LibraryBook::setTitle(std::string t) { title = t; }
void LibraryBook::setAuthor(std::string a) { author = a; }
void LibraryBook::setBorrowerName(std::string name) { borrowerName = name; }
void LibraryBook::setDaysBorrowed(int days) { daysBorrowed = days; }
void LibraryBook::setBorrowStatus(bool status) { isBorrowed = status; }

// Logic: Overdue standard limit is 14 days
bool LibraryBook::isOverdue() const {
    return (isBorrowed && daysBorrowed > 14);
}

// Logic: Fine is 100 RWF per day after the 14-day limit
double LibraryBook::calculateFine() const {
    if (isOverdue()) {
        return (daysBorrowed - 14) * 100.0;
    }
    return 0.0;
}

// Display individual book details
void LibraryBook::displayBookDetails() const {
    std::cout << std::left << std::setw(8) << bookID 
              << std::setw(25) << title 
              << std::setw(20) << author 
              << std::setw(15) << (isBorrowed ? "Borrowed" : "Available")
              << std::setw(18) << (isBorrowed ? borrowerName : "-")
              << std::setw(15) << daysBorrowed 
              << "RWF " << calculateFine() << "\n";
}