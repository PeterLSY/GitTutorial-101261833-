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
    cout << "File: " << name << endl;
    cout << "Last modified: ";
    lastModified.print();
    cout << endl;
}

// Print file metadata and content
void File::printContents() const {
    print();
    cout << "Content: " << content << endl;
}
