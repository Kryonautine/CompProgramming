#include <bits/stdc++.h>
using namespace std;

int dist_sq(int x1, int x2, int y1, int y2) {
	int ret = ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	if (ret < 0) {
		ret -= ret*2;
	}
	return ret;
}

int main() {
	int testcases;
	cin >> testcases;
	int answer[testcases];

	for (int i = 0 ; i < testcases; i++) {
		int arr[3][2];
		set<int> uniq;
		for (int j = 0 ; j < 3; j++) {
			cin >> arr[j][0] >> arr[j][1];
			uniq.insert(arr[j][0]);
			uniq.insert(arr[j][1]);
		}
		int a = dist_sq(arr[0][0], arr[1][0], arr[0][1], arr[1][1]);
		int b = dist_sq(arr[0][0], arr[2][0], arr[0][1], arr[2][1]);
		int c = dist_sq(arr[1][0], arr[2][0], arr[1][1], arr[2][1]);

		if ((a + b == c) || (c + b == a) || (a + c == b)) {
			if (uniq.size() <= 4) {
				answer[i] = 1;
			}
		}
		else {
			answer[i]=0;
		}

		/*
		cout << "XXXX" << endl;
		for (auto i = uniq.begin(); i != uniq.end(); i++) {
			cout << *i << " ";
		}
		cout << endl;

		cout << "====" << endl;
		cout << a << " " << b << " " << c;
		cout << endl;
		cout << "XXXX" << endl;
		*/
	}

	for (int i = 0 ; i < testcases; i++) {
		if (answer[i] == 0) {cout << "YES" << endl;}
		else {cout << "NO" << endl;}
	}
}