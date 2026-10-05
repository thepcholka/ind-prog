#include <iostream>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

const double EPSILON = 1e-9;

void printStudentName() {
    cout << "Ivanov Ivan" << endl;
}

bool isZero(double value) {
    return fabs(value) < EPSILON;
}

void printRoots(double a, double b, double c) {
    if (isZero(a) && isZero(b) && isZero(c)) {
        cout << "Any real number is a root" << endl;
        return;
    }

    if (isZero(a) && isZero(b)) {
        cout << "No real roots" << endl;
        return;
    }

    if (isZero(a)) {
        double root = -c / b;
        cout << "Root: " << root << endl;
        return;
    }

    double discriminant = b * b - 4.0 * a * c;

    if (discriminant > EPSILON) {
        double sqrtD = sqrt(discriminant);
        double root1 = (-b + sqrtD) / (2.0 * a);
        double root2 = (-b - sqrtD) / (2.0 * a);
        cout << "Roots: " << root1 << " " << root2 << endl;
    } else if (isZero(discriminant)) {
        double root = -b / (2.0 * a);
        cout << "Root: " << root << endl;
    } else {
        cout << "No real roots" << endl;
    }
}

void checkDivisibleByThree() {
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return;
    }

    if (number % 3 == 0) {
        cout << "The number is divisible by 3" << endl;
    } else {
        cout << "The number is not divisible by 3" << endl;
    }
}

int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    char symbol = '\0';

    cin >> a >> b >> c;
    cin >> symbol;

    if (symbol == 'C') {
        printStudentName();
    } else if (symbol == 'r') {
        printRoots(a, b, c);
    } else if (symbol == 's') {
        checkDivisibleByThree();
    } else {
        cout << "Unknown symbol" << endl;
    }

    return 0;
}
