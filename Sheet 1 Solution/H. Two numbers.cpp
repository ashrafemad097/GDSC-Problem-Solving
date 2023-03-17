#include <iostream>
#include <cmath> // for using floor , ceil , round
using namespace std;
int main() {
	double number1, number2;
	cin >> number1 >> number2;
	cout << "floor " << number1 << " / " << number2 << " = " << floor(number1 / number2) << endl;
	cout << "ceil " << number1 << " / " << number2 << " = " << ceil(number1 / number2) << endl;
	cout << "round " << number1 << " / " << number2 << " = " << round(number1 / number2) << endl;
}