#include <iostream>
using namespace std;
int main() {
	int A, B;
	char operation;
	cin >> A >> operation >> B;
	switch (operation) {
	case '+':
		cout << A + B << endl;
		break;
	case '-':
		cout << A - B << endl;
		break;
	case '*':
		cout << A * B << endl;
		break;
	case '/':
		cout << A / B << endl;
		break;
	}
}