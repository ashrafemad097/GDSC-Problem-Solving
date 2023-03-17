#include <iostream>
using namespace std;
int main() {
	int number1, number2, number3, number4;
	cin >> number1 >> number2 >> number3 >> number4;
	int newNumber1, newNumber2, newNumber3, newNumber4;

	newNumber1 = number1 % 100;
	newNumber2 = number2 % 100;
	newNumber3 = number3 % 100;
	newNumber4 = number4 % 100;

	int result = (newNumber1 * newNumber2 * newNumber3 * newNumber4) % 100;
	if (result > 9) {
		cout << result % 100 << endl;
	}
	else {
		cout << "0" << result % 100 << endl;
	}
}

/*

* This solution will give you overflow 

#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long result = a * b * c * d;
	cout << result % 100 << endl;
}

*/