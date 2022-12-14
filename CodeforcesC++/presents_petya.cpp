// Codeforces Beta Round #97 (Div. 2) :: Problem A

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	int gift[n][2];

	for (int i = 0; i < n; i++) {
		gift[i][0] = i;
		cin >> gift[i][1];
	}
	// Input done

	// Sorting by 2nd element(gift recieved from)
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (gift[i][1] > gift[j][1]) {
				int t1 = gift[j][0];
				int t2 = gift[j][1];
				gift[j][0] = gift[i][0];
				gift[j][1] = gift[i][1];
				gift[i][0] = t1;
				gift[i][1] = t2;
			}
		}
	}

	// Output
	for (int i = 0; i < n; i++) {
		cout << gift[i][0]+1 << " ";
	}
}