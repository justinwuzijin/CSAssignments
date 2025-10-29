//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 05 Task: 01
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
    int x;
    cout << "Enter an odd positive integer less than 20: " << endl;
    cin >> x;

    if (x % 2 == 0 || x >= 20) {
        return 1;
    }

    int half = (x/2) + 1;
    for (int i = 0; i <= x; i++) {
        int distance = abs(half-i);

        //loop for spaces
        for (int j = 0; j < distance; j++) {
            cout << " ";
        }
        //loop for asteriks
        for (int j = 0; j < x - (2*distance); j++) {
            cout << "*";
        }
        //loop for spaces *2
        for (int j = 0; j < distance; j++) {
            cout << " ";
        }
        cout << endl;
    }
}