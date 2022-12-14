// Codeforces Round #267 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int n, empty = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int p, q;
		cin >> p >> q;
		if (q - p > 1) {
			empty++;
		}
	}

	cout << empty;
}