//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 06 Task: 02
//
// Filename: triangle.cpp
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
#include <cmath>
#include <iomanip>
using namespace std;

void enter_sides(double &a, double &b, double &c);
bool check_sides(double &a, double &b, double &c);
double calculate_angle(double &a, double &b, double &c);

void enter_sides(double &a, double &b, double &c) {
    cout << "input: " << endl;
    cin >> a >> b >> c;
}

bool check_sides(double &a, double &b, double &c){
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        return false;
    }
    return true;
}

double calculate_angle(double &a, double &b, double &c){
    double cos_theta = (a*a + b*b - c*c) / (2 * a * b);
    double theta_rad = acos(cos_theta);
    return theta_rad * 180.0 / M_PI;
}

int main () {
    double a,b,c;
    enter_sides(a,b,c);

    if (!check_sides(a, b, c)) {
        return 1;
    }
    double theta = calculate_angle(a, b, c);
    cout << fixed << setprecision(2) << theta << endl;

    return 0;


}