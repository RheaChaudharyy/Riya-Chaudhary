#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    // Constructor to initialize values
    Calculator(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    // Function to perform the calculation
    void compute() {
        if (operation == "add") {
            cout << "Result: " << a + b << endl;
        } else if (operation == "subtract") {
            cout << "Result: " << a - b << endl;
        } else if (operation == "multiply") {
            cout << "Result: " << a * b << endl;
        } else if (operation == "divide") {
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else {
            cout << "Invalid operation!" << endl;
        }
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    Calculator calc(num1, num2, op);
    calc.compute();

    return 0;
}

       