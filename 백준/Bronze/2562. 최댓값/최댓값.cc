#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[9];
	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;

		arr[i] = num;
	}

	int *max_index = max_element(arr, arr + 9);
	cout << *max_index << "\n";
	cout << max_index - arr + 1 << "\n";
}