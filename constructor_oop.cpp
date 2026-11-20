#include <iostream>
#include <string>
using namespace std;

class Student {

private:
    string name;
    int id;

public:

    // Default Constructor
    Student() {
        name = "Unknown";
        id = 0;
    }

    // Parameterized Constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    // Member function to display information
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "----------------" << endl;
    }
};

int main() {

    // Object using default constructor
    Student s1;

    // Three objects using parameterized constructor
    Student s2("Rahim", 210601);
    Student s3("Karim", 210602);
    Student s4("Hasan", 210603);

    // Displaying student information
    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}