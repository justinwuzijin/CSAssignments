//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 03 Task: 01
//
// Filename: wdhms.cpp
// Date submitted: September 30th, 2025
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
    int num_secs;
    int num_mins;
    int num_hours;
    int num_days;
    int num_weeks;

    cout << "Please enter the number of seconds: " << endl;
    cin >> num_secs;
    if (num_secs < 0 ) {
        return 1;
    }

    num_weeks = num_secs / 604800;
    num_secs = num_secs%604800;
    num_days = num_secs/86400;
    num_secs = num_secs%86400;
    num_hours = num_secs/3600;
    num_secs = num_secs%3600;
    num_mins = num_secs/60;
    num_secs = num_secs%60;


    cout << num_weeks << " weeks, \n"
<< num_days << " days, \n"
<< num_hours << " hours, \n"
<< num_mins << " minutes and \n"
<< num_secs << " seconds.\n";

    return 0;
}