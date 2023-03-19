// Author : Ashraf Emad 
// 617A - Elephant 

#include <iostream>
using namespace std;
int main() {
	int steps, minSteps = 0;
	cin >> steps;
	if (steps < 5) {
		cout << ++minSteps << endl;
	}
	else {
		while (steps > 5) {
			minSteps++;
			steps -= 5;
		}
		if (steps != 0)
			minSteps++;
		cout << minSteps << endl;
	}
}