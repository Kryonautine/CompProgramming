#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	int answer[testcases];
	int arr[testcases][3][2];

	for (int i = 0 ; i < testcases; i++) {
		for (int j = 0 ; j < 3; j++) {
			cin >> arr[i][j][0] >> arr[i][j][1];
		}
	}

	for (int i = 0 ; i < testcases; i++) {
		
	}

	for (int i = 0 ; i < testcases; i++) {
		if (answer[i] == 0) {cout << "YES" << endl;}
		else {cout << "NO" << endl;}
	}
}