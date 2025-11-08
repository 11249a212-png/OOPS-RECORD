#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    // Function to take input for the complex number
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

   
    Complex operator+(Complex c) {
        Complex temp;
     
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display the complex number in 'a + bi' format
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    // Get input for the two complex numbers
    cout << "First Complex Number:" << endl;
    c1.getData();
    cout << "Second Complex Number:" << endl;
    c2.getData();

    // Perform addition using the overloaded operator
    // This calls c1.operator+(c2)
    c3 = c1 + c2;

    // Display the result
    cout << "\nSum = ";
    c3.display();

    return 0;
}
