#include <iostream>
using namespace std;
int main() {
	double firstPoint, secondPoint;
	// firstPoint => x , secondPoint = y
	cin >> firstPoint >> secondPoint;
	if (firstPoint > 0 && secondPoint > 0) { // Q1 
		cout << "Q1" << endl;
	}
	else if (firstPoint < 0 && secondPoint > 0) { // Q2 
		cout << "Q2" << endl;
	}
	else if (firstPoint < 0 && secondPoint < 0) { // Q3 
		cout << "Q3" << endl;
	}
	else if (firstPoint > 0 && secondPoint < 0) { // Q4 
		cout << "Q4" << endl;
	}
	else if (firstPoint != 0 && secondPoint == 0) {
		cout << "Eixo X" << endl;
	}
	else if (firstPoint == 0 && secondPoint != 0) {
		cout << "Eixo Y" << endl;
	}
	else if (firstPoint == 0 && secondPoint == 0) {
		cout << "Origem" << endl;
	}
}