#include <iostream>
using namespace std;
int main() {
	float number;
	cin >> number;
	// Interval from [0,25], (25,50], (50,75], (75,100]
	if (number >= 0 && number <= 25) {
		cout << "Interval [0,25]" << endl;
	}
	else if (number > 25 && number <= 50) {
		cout << "Interval (25,50]" << endl;
	}
	else if (number > 50 && number <= 75) {
		cout << "Interval (50,75]" << endl;
	}
	else if (number > 75 && number <= 100) {
		cout << "Interval (75,100]" << endl;
	}
	else {
		cout << "Out of Intervals" << endl;
	}
}