//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 03 Task: 03
//
// Filename: wind.cpp
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
#include <cmath>
using namespace std;

int main() {
    double air_temp;
    double wind_speed;
    double wind_chill_value;

    cout << "Enter the air temperature and the wind speed: " << endl;
    cin >> air_temp >> wind_speed;
    wind_speed = wind_speed*0.6215;
    air_temp = (9.00/5.00)*air_temp + 32;
    if (wind_speed < 0) {
        return 1;
    }

    if (wind_speed <= 4) {
        wind_chill_value = air_temp;
    }
    else if (wind_speed <= 45 && wind_speed > 4) {
        double temp = sqrt(wind_speed);
        wind_chill_value = 91.4 - (10.45 + 6.69 * temp - 0.447 * wind_speed) *
                              ((91.4 - air_temp) / 22.0);
    }
    else {
        wind_chill_value = 1.6 * (air_temp) - 55;
    }

    wind_chill_value = (5.00/9.00)*(wind_chill_value - 32);
    cout.setf(ios::fixed); cout.precision(2);
    cout << "The wind chill index is " << wind_chill_value << ". Brrrr!" << endl;

    return 0;
}