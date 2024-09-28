#include "File.h"

// Constructor
File::File(const string& name, const string& content, Date& date)
    : name(name), content(content), lastModified(date) {}

// Getters
string File::getName() const {
    return name;
}

string File::getContent() const {
    return content;
}

Date File::getDate() const {
    return lastModified;
}

// Comparison function
bool File::lessThan(const File& otherFile) const {
    return lastModified.lessThan(otherFile.getDate());
}

// Print file metadata (name and date)
void File::print() const {
    // Debug print statement
    cout << "Debug: Printing file metadata" << endl;

    cout << "File: " << name << endl;
    cout << "Last modified: ";
    lastModified.print();
    cout << endl;
}

// Print file metadata and content
void File::printContents() const {
    // Debug print statement
    cout << "Debug: Printing file contents" << endl;

    // First, print the metadata (name and date)
    cout << "File: " << name << endl;
    cout << "Last modified: ";
    lastModified.print();
    cout << endl;

    // Then, print the file content
    cout << "Content: " << endl << content << endl;
}
