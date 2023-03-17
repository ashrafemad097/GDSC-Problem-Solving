#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << min(x, min(y, z)) << " " << max(x, max(y, z)) << endl;
}

/*
	another solution with conditions 
	int min = 0; 
	if(x < y && x < z)
		min = x;
	else if(y < x && y < z)
		min = y;
	else if(z < x && z < y)
		min = z;
*/