#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base public function\n";
    }
};

class PublicDerived : public Base {
public:
    void display() {
        show();
    }
};

class PrivateDerived : private Base {
public:
    void display() {
        show(); // Accessible inside the class
    }
};

int main() {
    PublicDerived pub;
    PrivateDerived pri;

    pub.display(); // Works
    pri.display(); // Works

    // pub.show(); // Error: show() is inherited as public, but should be accessed via object? Actually allowed, but commented in example.
    // pri.show(); // Error: show() is private in PrivateDerived

    return 0;
}
