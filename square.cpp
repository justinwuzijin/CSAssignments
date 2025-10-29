//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 04 Task: 01
//
// Filename: square.cpp
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

    int size;
    int i = 0;
    int j = 0;
    cout << "Enter the size of the square: " << endl;
    cin >> size;

    if (size % 2 == 1 || size < 2 || size > 20) {
        return -1;
    }

    while (i < size) {
        while (j < size) {
            if (i != 0 && i != size-1 &&  (j > 0 && j < size-1)) {
                cout << " ";
            }
            else {
                cout << "*";
            }
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}





