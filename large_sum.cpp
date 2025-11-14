//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 06 Task: 02
//
// Filename: large_sum.cpp
// Date submitted: November 11th, 2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//********************************************

#include <iostream>
#include <algorithm>
#include "large_sum.h"
using namespace std;
string num1, num2;
string sum;

bool enter_nums() {
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: "<< endl;
    cin >> num2;
    //invalidating inputs that have spaces
    for (int i = 0; i < num1.length(); i++) {
        if (num1[i] == ' ') {
            return false;
        }
    }
    for (int i = 0; i < num2.length(); i++) {
        if (num2[i] == ' ') {
            return false;
        }
    }
    //removing leading 0s
    while (num1[0] == 0) {
        num1 = num1.substr(1);
    }
    while (num2[0] == 0) {
        num2 = num2.substr(1);
    }

    return true;
}
void add_large_numbers() {
    int carry = 0;
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int count = 0;
    while (count < num1.length() || count < num2.length() || carry != 0) {
        int d1 = (count < num1.length()) ? (num1[count] - '0') : 0;
        int d2 = (count < num2.length()) ? (num2[count] - '0') : 0;

        int currSum = d1 + d2 + carry;
        sum += to_string(currSum % 10);
        carry = currSum / 10;
        count++;
    }
    reverse(sum.begin(), sum.end());
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
}
void display_num() {
    cout << "Sum: " << sum << endl;
}

int main() {
    while (true) {
        if (enter_nums()) {
            if (num1 == "-1" || num2 == "-1") {
                cout << "The End";
                break;
            }
            sum.clear();
            add_large_numbers();
            display_num();
        }
    }
}