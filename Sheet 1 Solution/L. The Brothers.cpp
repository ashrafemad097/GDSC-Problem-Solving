#include <iostream>
using namespace std;
int main() {
	string firstName1, secondName1, firstName2, secondName2;
	cin >> firstName1 >> secondName1 >> firstName2 >> secondName2;
	if (secondName1 == secondName2)
		cout << "ARE Brothers" << endl;
	else
		cout << "NOT" << endl;
}