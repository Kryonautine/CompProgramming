// Codeforces Beta Round #87 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int stops, curr_cap = 0, min_cap = 0;
	cin >> stops;

	for (int i = 0; i < stops; i++) {
		int t1, t2;
		cin >> t1 >> t2;
		curr_cap = curr_cap - t1 + t2;
		if (min_cap < curr_cap) {min_cap = curr_cap;}
	}

	cout << min_cap;
}