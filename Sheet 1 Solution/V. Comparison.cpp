#include <iostream>
using namespace std;
int main() {
	int number1, number2;
	char operation;
	cin >> number1 >> operation >> number2;
	switch (operation) {
	case '>': {
		if (number1 > number2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
	}
		break;
	case '=': {
		if (number1 == number2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
	}
			break;
	case '<': {
		if (number1 < number2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
	}
			break;
	}
}