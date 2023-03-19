// Author : Ashraf Emad
// 546A - Soldier and Bananas

#include <iostream>
using namespace std;
int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int totalCost = 0;
	/*
		k => cost of banana 
		n => money the soldier has 
		w => needed bananas 

		first banana = 1k , second banana = 2k ...etc
	*/
	for (int i = 1; i <= w; i++) {
		totalCost += i * k;
	}
	// For getting needed money we will subtract the total cost from the solider's money
	if (n >= totalCost)
		cout << 0 << endl;
	else
		cout << totalCost - n << endl;
}