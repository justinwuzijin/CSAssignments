// //*********************************************
// // Student Name: Justin Wu
// // Student Number: 21179027
// //
// // SYDE121 Lab: 06 Task: 01
// //
// // Filename: coord.cpp
// // Date submitted: November 11th, 2025
// //
// // I hereby declare that this code, submitted
// // for credit for the course SYDE121, is a product
// // of my own efforts. This coded solution has
// // not been plagiarized from other sources and
// // as not been knowingly plagiarized by others.
// //
// //********************************************
//
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #include "coord.h"
// using namespace std;
//
//
// void get_point(Point3D &pt){
//     cout << "Enter the id record: " << endl;;
//     cin >> pt.id;
//     cout << "Enter the x coordinate: " << endl;;
//     cin >> pt.x;
//     cout << "Enter the y coordinate: " << endl;;
//     cin >> pt.y;
//     cout << "Enter the z coordinate: " << endl;;
//     cin >> pt.z;
//     cout << "Enter the classification record: " << endl;;
//     cin >> pt.order;
// }
//
// void print_point(const Point3D &pt){
//     cout << "Point ID: " << setw(10) << pt.id << endl;
//     cout << "X Coordinate: " << setw(10) << pt.x << endl;
//     cout << "Y Coordinate: " << setw(10) << pt.y << endl;
//     cout << "Z Coordinate: " << setw(10) << pt.z << endl;
//     cout << "Classification: " << setw(10) << pt.order << endl;
// }
//
// double spatial_dist(const Point3D &pt1, const Point3D &pt2){
//     double xtotal = pt2.x - pt1.x;
//     double ytotal = pt2.y - pt1.y;
//     double ztotal = pt2.z - pt1.z;
//     return sqrt(xtotal*xtotal + ytotal*ytotal + ztotal*ztotal);
// }
//
// double plani_dist(const Point3D &pt1, const Point3D &pt2){
//     double xtotal = pt2.x - pt1.x;
//     double ytotal = pt2.y - pt1.y;
//     return sqrt(xtotal*xtotal + ytotal*ytotal);
// }
//
// double height_diff(const Point3D &pt1, const Point3D &pt2){
//     return pt2.z-pt1.z;
// }
//
// double azimuth(const Point3D &pt1, const Point3D &pt2){
//     return (180 * atan2(pt2.y-pt1.y, pt2.x-pt1.x))/ (M_PI);
// }
//
