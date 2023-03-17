#include <iostream>
using namespace std;
int main() {
	long long A, B, C, Max = 0, Min = 0, Mid = 0;
	cin >> A >> B >> C;
	if (A <= B && A <= C) {
		Min = A;
		if (B < C) {
			Mid = B;
			Max = C;
		}
		else {
			Mid = C;
			Max = B;
		}
	}
	else if (B <= A && B <= C) {
		Min = B;
		if (A < C) {
			Mid = A;
			Max = C;
		}
		else {
			Mid = C;
			Max = A;
		}
	}
	else if (C <= A && C <= B) {
		Min = C;
		if (A < B) {
			Mid = A;
			Max = B;
		}
		else {
			Mid = B;
			Max = A;
		}
	}
	cout << Min << '\n' << Mid << '\n' << Max << '\n';
	cout << endl;
	cout << A << '\n' << B << '\n' << C << '\n';
}

/*

// Another Solution

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[3], A, B, C;
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	A = arr[0];
	B = arr[1];
	C = arr[2];
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++)
		cout << arr[i] << endl;
	cout << endl;
	cout << A << endl;
	cout << B << endl;
	cout << C << endl;
}

*/