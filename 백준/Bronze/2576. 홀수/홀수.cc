#include <iostream>

using namespace std;

#define MAX_NUMBER 100

int main() {
	int min_odd = MAX_NUMBER;
	int sum_odd = 0;
	for (int i = 0; i < 7; i++) {
		int num;
		cin >> num;

		if (num % 2 != 0) {
			sum_odd += num;
			if (num < min_odd) {
				min_odd = num;
			}
		}
	}

	if (min_odd == MAX_NUMBER) cout << -1;
	else {
		cout << sum_odd << "\n" << min_odd;
	}
}