#include <iostream>
using namespace std;
int main() {
	char ch;
	cin >> ch;
	if (ch >= 65 && ch <= 90) {
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	}
	else if (ch >= 97 && ch <= 122) {
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}
	else {
		cout << "IS DIGIT" << endl;
	}
} 

// Small charcters start from 65 to 90
// Capital characters start from 97 to 122