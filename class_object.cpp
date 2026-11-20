#include <iostream>
#include <string>
using namespace std;

// Creating a class named Student
class Student {
public:
    // Data members
    string name;
    int studentID;

    // Member function
    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {

    // Creating an object of Student class
    Student s1;

    // Assigning values to data members
    s1.name = "Rahim";
    s1.studentID = 210601;

    // Calling member function using object
    s1.displayInfo();

    return 0;
}