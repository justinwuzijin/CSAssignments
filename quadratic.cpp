//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 06 Task: 01
//
// Filename: quadratic.cpp
// Date submitted: October 25th, 2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void enter_data(double &a, double &b, double &c);
void quadratic(double a, double b, double c,
               double &first_real, double &first_imag,
               double &second_real, double &second_imag);
void display_results(double first_real, double first_imag,
                     double second_real, double second_imag);
void enter_data(double &a, double &b, double &c) {
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "  a = " << a << endl << endl;

    cout << "Enter the value for b: ";
    cin >> b;
    cout << "  b = " << b << endl << endl;

    cout << "Enter the value for c: ";
    cin >> c;
    cout << "  c = " << c << endl << endl;
}

void quadratic(double a, double b, double c,
               double &first_real, double &first_imag,
               double &second_real, double &second_imag) {
    double discriminant = b*b - 4*a*c;
    if (discriminant < 0) {
        first_real = -b / (2*a);
        second_real = first_real;
        first_imag = sqrt(-discriminant) / (2*a);
        second_imag = -first_imag;
    } else {
        first_real = (-b + sqrt(discriminant)) / (2*a);
        second_real = (-b - sqrt(discriminant)) / (2*a);
        first_imag = 0;
        second_imag = 0;
    }
}

void display_results(double first_real, double first_imag,
                     double second_real, double second_imag) {
    cout << fixed << setprecision(4);
    if (first_imag == 0 && second_imag == 0) {
        cout << "The roots of the equation are "
             << first_real << " and " << second_real << "." << endl << endl;
    } else {
        cout.setf(ios::showpos);
        cout << "The roots of the equation are "
             << first_real << first_imag << "j and "
             << second_real << second_imag << "j." << endl << endl;
    }
}

int main() {
    double a, b, c;
    double first_real, first_imag, second_real, second_imag;
    enter_data(a, b, c);
    quadratic(a, b, c, first_real, first_imag, second_real, second_imag);
    display_results(first_real, first_imag, second_real, second_imag);
}