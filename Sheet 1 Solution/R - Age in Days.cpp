#include <iostream>
using namespace std;
int main() {
	int days, year, month;
	cin >> days;

	year = days / 365; // when devide on 365 we will get the number of years 
	days -= year * 365; // subtract the years from the total days to getting the remaining days 
	month = days / 30;
	days -= month * 30; // subtract the months from the total days to getting the remaining days 
	
	cout << year << " years" << endl;
	cout << month << " months" << endl;
	cout << days << " days" << endl;
}