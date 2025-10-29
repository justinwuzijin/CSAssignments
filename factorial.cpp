//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 04 Task: 02
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
using namespace std;

int main() {
    int number;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0 || number > 12){
        return 1;
    }

    for (int i = 0; i < number; i++) {
        fact *= (i+1);
    }

    cout << "The factorial of " << number << " is " << fact << "." << endl;
    return 0;

}





