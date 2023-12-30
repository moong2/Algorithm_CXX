#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;

		arr[i] = num;
		sum += num;
	}
	sort(arr, arr + 5);

	cout << sum / 5 << "\n" << arr[2];
}