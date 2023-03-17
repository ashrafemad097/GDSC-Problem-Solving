#include <iostream>
#include <cmath>
using namespace std;
int main() {
	// log(A ^ B) => B * log(A)
	// log(C ^ D) => D * log(C)
	// By taking log() from the two equation to low the result
	double A, B, C, D;
	cin >> A >> B >> C >> D;
	double result1 = B * log(A);
	double result2 = D * log(C);
	// using the data type double because the log() can give me a floating point number .

	if (result1 > result2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

/*
// This solution will give you overflow
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int result1 = 0, result2 = 0;
	result1 = pow(A, B);
	result2 = pow(C, D);
	if (result1 > result2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
*/