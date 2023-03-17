#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float number;
	cin >> number;
	if (number - floor(number) == 0) {
		cout << "int " << number << endl;
	}
	else {
		cout << "float " << floor(number) << " " << number - floor(number) << endl;
	}
}