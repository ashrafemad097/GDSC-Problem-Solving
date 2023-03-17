#include <iostream>
using namespace std;
int main() {
	int number, remainder = 0;
	cin >> number;
	while (number > 0) {
		remainder = number % 10;
		number /= 10;
	}
	if (remainder % 2 == 0)
		cout << "EVEN" << endl;
	else
		cout << "ODD" << endl;
}