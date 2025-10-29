//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 01 Task: 01
//
// Filename: lab0101.cpp
// Date submitted: September 13th, 2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************
//filename: lab0101.cpp
// This program uses a loop
// to calculate squares of
// integers 3 to 9
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (i = 3; i <= 10; i++)
    {
        cout << "i = " << i
        << " squared = "
        << i * i
        << endl;
    }
    cout << "\nA program by: Justin Wu\n";
    return 0;
}