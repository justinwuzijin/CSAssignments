//*********************************************
// Student Name: Justin Wu
// Student Number: 21179027
//
// SYDE121 Lab: 05 Task: 02
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
#include <iomanip>
using namespace std;

int main() {
    int manager_count = 0, hourly_count = 0, commission_count = 0, piece_count = 0;
    double manager_pay = 0, hourly_pay = 0, commission_pay = 0, piece_pay = 0;

    while (true) {
        int n;
        if (!(cin >> n)) break;   // stop if no more input

        switch (n) {
            case 1: { // Manager
                double n1;
                cin >> n1;
                manager_pay += n1;
                manager_count++;
                break;
            }

            case 2: { // Hourly
                double hours, rate;
                cin >> hours >> rate;
                if (hours > 40)
                    hourly_pay += 40 * rate + 1.5 * (hours - 40) * rate;
                else
                    hourly_pay += hours * rate;
                hourly_count++;
                break;
            }

            case 3: { // Commission
                double sales;
                cin >> sales;
                commission_pay += 250 + 0.057 * sales;
                commission_count++;
                break;
            }

            case 4: { // Piece
                double pieces, rate;
                cin >> pieces >> rate;
                piece_pay += pieces * rate;
                piece_count++;
                break;
            }

            case -1: { // Summary output
                cout << "Summary\n";
                cout << fixed << setprecision (2);
                cout << "Worker Type    Number      Total Pay\n";
                cout << "====================================\n";

                cout << "Manager        ";
                cout << setw(4) << manager_count;
                cout << "       ";
                cout << setw(9) << manager_pay;
                cout << endl;

                cout << "Hourly         ";
                cout << setw(4) << hourly_count;
                cout << "       ";
                cout << setw(9) << hourly_pay;
                cout << endl;

                cout << "Commission     ";
                cout << setw(4) << commission_count;
                cout << "       ";
                cout << setw(9) << commission_pay;
                cout << endl;

                cout << "Piece          ";
                cout << setw(4) << piece_count;
                cout << "       ";
                cout << setprecision (2) << setw(9) << piece_pay;
                cout << endl;

                cout << "====================================\n";
                cout << "TOTAL          ";
                cout << setw(4);
                cout << manager_count + hourly_count + commission_count + piece_count;
                cout << "       ";
                cout << setprecision (2) << setw(9);
                cout << manager_pay + hourly_pay + commission_pay + piece_pay;
                cout << endl;

                return 0;  // program ends after summary
            }

            default:
                // ignore any invalid worker type codes instead of exiting
                break;
        }
    }

    return 0;
}
