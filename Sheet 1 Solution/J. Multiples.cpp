#include <iostream>
using namespace std;
int main() {
	int number1, number2;
	cin >> number1 >> number2;
	if (number1 % number2 == 0 || number2 % number1 == 0)
		cout << "Multiples" << endl;
	else
		cout << "No Multiples" << endl;
}