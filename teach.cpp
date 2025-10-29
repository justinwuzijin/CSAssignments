//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 04 Task: 03
//
// Filename: teach.cpp
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
    int correct = 0;
    int count = 0;
    int status = 0;
    int wrong = 0;

    int x = rand() % 10;
    int y = rand() % 10;

    while (status == 0) {
        if (wrong == 0) {
            x = rand() % 10 ;
            y = rand() % 10;
        }

        int input;
        cout << "\nHow much is " << x << " times " << y << "? (Enter -1 to end)";
        cin >> input;

        int ans = x*y;
        if (ans == input) {
            correct += 1;
            wrong = 0;
            cout << "\nVery good!\n\n";

        }
        else if(input == -1){
            status = 1;
            count--;
        }
        else {
            wrong = 1;
            cout << "No. Please try again. " << endl;
        }
        count++;
    }
    cout << "\nCorrectly answered " << correct << " of " << count << " on the first try.\n";
}




