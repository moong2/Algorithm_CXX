#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int money;
	if (a == b && b == c) {
		money = 10000 + a * 1000;
	}
	else if (a == b || b == c || c == a) {
		if (a == b || c == a) money = 1000 + a * 100;
		else money = 1000 + b * 100;
	}
	else {
		int max_number = max(a, b);
		max_number = max(max_number, c);
		money = max_number * 100;
	}

	cout << money;
}