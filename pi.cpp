//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 05 Task: 03
//
// Filename: factorial.cpp
// Date submitted: October 5th, 2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int count = 0;;
    cout << "Enter the term number count: " << endl;

    double pi = 4, difference = 4, tolerance, denominator = 3;
    cin >> tolerance;
    cout << fixed << setprecision(12);

    while (difference > tolerance) {
        double temp = pi;
        cout << count << "\t\t" << pi << '\n';
        if (count % 2 == 0) {
            pi = fabs(pi - (4/denominator));
        }
        else {
            pi = fabs(pi + (4/denominator));
        }
        denominator+=2;
        difference = fabs(pi-temp);
        count++;
    }
    cout << count << "\t\t" << pi << '\n';
}