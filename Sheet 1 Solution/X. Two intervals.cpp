#include <iostream>
using namespace std;
int main() {
	int p1, p2, p3, p4;
	
	cin >> p1 >> p2 >> p3 >> p4;
	
	int begin = 0, end = 0;

	if ((p3 < p1 && p4 < p1) || (p3 > p2 && p4 > p2)) {
		cout << -1 << endl;
	}
	else {
		if (p1 > p3) {
			begin = p1;
		}
		else {
			begin = p3;
		}

		if (p2 > p4) {
			end = p4;
		}
		else {
			end = p2;
		}
		cout << begin << " " << end << endl;
	}
}
