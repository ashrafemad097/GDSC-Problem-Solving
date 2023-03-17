#include <iostream>
using namespace std;
int main() {
	char x;
	cin >> x;
	char result;
	if (x >= 65 && x <= 90) {
		result = x + 32;
	}
	else if (x >= 97 && x <= 122) {
		result = x - 32;
	}
	cout << result << endl;
}
// Note that : small characters start in 97 and end with 122 
// Note that : capital characters start in 65 and end with 90 