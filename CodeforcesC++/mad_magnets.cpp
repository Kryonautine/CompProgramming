// Codeforces Round #200 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int magnets[n];
	int group = 1;

	for (int i = 0; i < n; i++) {
		cin >> magnets[i];
	}
	// Input done

	for (int i = 0; i < n-1; i++) {
		if (magnets[i] != magnets[i+1]) {
			group++;
		}
	}

	cout << group;
}