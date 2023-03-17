#include <iostream>
using namespace std;
int main() {
	int number1, number2, result;
	char operation1, operation2;
	cin >> number1 >> operation1 >> number2 >> operation2 >> result;
	switch (operation1) {
	case '+': {
		if (number1 + number2 == result) {
			cout << "Yes" << endl;
		}
		else {
			cout << number1 + number2 << endl;
		}
	}
		break;
	case '-': {
		if (number1 - number2 == result) {
			cout << "Yes" << endl;
		}
		else {
			cout << number1 - number2 << endl;
		}
	}
			break;
	case '*': {
		if (number1 * number2 == result) {
			cout << "Yes" << endl;
		}
		else {
			cout << number1 * number2 << endl;
		}
	}
			break;
	case '/': {
		if (number1 / number2 == result) {
			cout << "Yes" << endl;
		}
		else {
			cout << number1 / number2 << endl;
		}
	}
			break;
	}
}