#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class File {
public:
    // Constructors
    File(const string& name, const string& content, Date& date);

    // Getters
    string getName() const;
    string getContent() const;
    Date getDate() const;

    // Comparison function
    bool lessThan(const File& otherFile) const;

    // Print functions
    void print() const;           // Print file metadata (name and date)
    void printContents() const;   // Print file metadata and content

private:
    string name;
    string content;
    Date lastModified;
};

#endif
