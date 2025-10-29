//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 06 Task: 03
//
// Filename: bisection.cpp
// Date submitted: October 5th, 2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//********************************************
//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 06 Task: 03
//
// Filename: bisection.cpp
// Date submitted: October 25th, 2025
//
//*********************************************

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

double f(double theta_deg, double rhs);
double bisection(double lo, double hi, double rhs, double tol);

double f(double theta_deg, double rhs){
    double theta_rad = theta_deg * (M_PI / 180.0);
    return tan(theta_rad) - sin(theta_rad) - rhs;
}

double bisection(double lo, double hi, double rhs, double tol){
    double mid = 0.0;
    double f_lo = f(lo, rhs);
    double f_hi = f(hi, rhs);

    for (int i = 0; i < 256; i++){
        mid = (lo + hi) / 2.0;
        double f_mid = f(mid, rhs);

        if (fabs(f_mid) < tol || (hi - lo) < 1e-12) {
            return mid;
        }

        if ((f_mid > 0 && f_lo > 0) || (f_mid < 0 && f_lo < 0)){
            lo = mid;
            f_lo = f_mid;
        }
        else{
            hi = mid;
            f_hi = f_mid;
        }
    }
    return mid;
}

int main(){
    double rhs, lo, hi, tol;

    if (!(cin >> rhs >> lo >> hi >> tol)) {
        return 1;
    }

    if (!(isfinite(rhs) && isfinite(lo) && isfinite(hi) && isfinite(tol))) {
        return 1;
    }
    if (lo < 0 || hi > 89 || lo >= hi) {
        return 1;
    }
    if (tol < 1e-15 || tol > 1e-6) {
        return 1;
    }

    double f_lo = f(lo, rhs);
    double f_hi = f(hi, rhs);

    if (f_lo * f_hi > 0) {
        return 1;
    }

    double theta = bisection(lo, hi, rhs, tol);
    double residual = f(theta, rhs);

    cout << fixed << setprecision(10) << theta << " deg" << endl;
    cout << scientific << setprecision(12) << residual << endl;

    return 0;
}