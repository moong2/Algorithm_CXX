#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		pair<int, int> zero = make_pair(0, 0);
		for (int j = 0; j < 4; j++) {
			int yutnori;
			cin >> yutnori;

			if (yutnori == 0) zero.second++;
		}

		char res;
		if (zero.second == 1) res = 'A';
		else if (zero.second == 2) res = 'B';
		else if (zero.second == 3) res = 'C';
		else if (zero.second == 4) res = 'D';
		else res = 'E';

		cout << res << "\n";
	}
}