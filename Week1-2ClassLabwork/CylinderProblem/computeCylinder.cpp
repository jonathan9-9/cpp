/*  Write a c++ program that reads in the radius and length  from keyboard of a cylinder and computes the area and volume using the following formulas:

area = radius * radius * pi

volume = area * length
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {

    double radius;
    double length;


    cout << "Provide the value of the radius: " << endl;
    cin >> radius;

    cout << "Provide the value of the length: " << endl;
    cin >> length;

    double area = radius * radius * M_PI;
    double volume = area * length;

    cout << "The area is " << area << " and the volume of the cylinder is " << volume << endl;

    return 0;
}
