#include <iostream>

using namespace std;

int main() {
	int year;
	cin >> year;

	int is_leap_year = 0;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) is_leap_year = 1;

	cout << is_leap_year;
}