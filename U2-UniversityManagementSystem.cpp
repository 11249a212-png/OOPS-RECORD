#include <iostream>
using namespace std;

class Department {
public:
    string deptName;

    Department(string d) {
        deptName = d;
        cout << "Department " << deptName << " created." << endl;
    }

    ~Department() {
        cout << "Department " << deptName << " destroyed." << endl;
    }
};

class University {
    string uniName;
    Department dept; // Composition: University has a Department

public:
    // Initialization list used to initialize 'dept'
    University(string u, string d) : uniName(u), dept(d) {
        cout << "University " << uniName << " initialized." << endl;
    }

    void display() {
        cout << "University: " << uniName
             << ", Department: " << dept.deptName << endl;
    }

    ~University() {
        cout << "University " << uniName << " closed." << endl;
    }
};

int main() {
    University u1("SCSVMV University", "Computer Science");
    u1.display();
    return 0;
}
