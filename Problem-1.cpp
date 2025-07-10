#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double x, double y) {
        a = x;
        b = y;
    }

    double performOperation(const string& operation) {
        if (operation == "add") {
            return a + b;
        } else if (operation == "subtract") {
            return a - b;
        } else if (operation == "multiply") {
            return a * b;
        } else if (operation == "divide") {
            if (b == 0) {
                throw runtime_error("Error: Division by zero.");
            }
            return a / b;
        } else {
            throw invalid_argument("Invalid operation. Use add, subtract, multiply, or divide.");
        }
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter first number (a): ";
    cin >> num1;

    cout << "Enter second number (b): ";
    cin >> num2;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> op;

    try {
        Calculator calc(num1, num2);
        double result = calc.performOperation(op);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
