#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>

class LibraryBook {
private:
    int bookID;
    std::string title;
    std::string author;
    std::string borrowerName;
    int daysBorrowed;
    bool isBorrowed; // true if borrowed, false if available

public:
    // Constructors & Destructor
    LibraryBook();
    LibraryBook(int id, std::string t, std::string a);
    ~LibraryBook();

    // Getters
    int getBookID() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getBorrowerName() const;
    int getDaysBorrowed() const;
    bool getBorrowStatus() const;

    // Setters
    void setBookID(int id);
    void setTitle(std::string t);
    void setAuthor(std::string a);
    void setBorrowerName(std::string name);
    void setDaysBorrowed(int days);
    void setBorrowStatus(bool status);

    // Helper Methods
    bool isOverdue() const;
    double calculateFine() const;
    void displayBookDetails() const;
};

#endif