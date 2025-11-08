#include <iostream>
using namespace std;

class Temperature {
    float celsius;
public:
    // Function to get input from the user
    void getData() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // Overloaded unary minus operator to convert Celsius to Fahrenheit
    void operator-() {
        float fahrenheit = (celsius * 9.0/5.0) + 32; // Use 9.0/5.0 for floating-point division
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t; // Create an object of the Temperature class
    t.getData();   // Get user input

    -t;            // Call the overloaded operator-() function
    return 0;
}
