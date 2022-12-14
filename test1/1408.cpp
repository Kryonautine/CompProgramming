
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	vector<vector<int>> ret;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> a;
		vector<int> b;
		vector<int> c;

		for (int k = 0; k < n ; k++) {
			int temp;
			cin >> temp;
			a.push_back(temp);
		}
		for (int k = 0; k < n ; k++) {
			int temp;
			cin >> temp;
			b.push_back(temp);
		}
		for (int k = 0; k < n ; k++) {
			int temp;
			cin >> temp;
			c.push_back(temp);
		}

		ret[i].push_back(a[0]);
		int prev = a[0];
		for (int k = 1; k < n ; k++) {
		}
	}


}