#include <iostream>
#include <cmath> // for using pow()
#include<iomanip> // for using setprecision
using namespace std;
const double pi = 3.141592653;
int main() {
	double radius;
	cin >> radius;
	double area = pi * pow(radius, 2); // = pi * radius * radius
	cout << fixed << setprecision(9) << area << endl;
}