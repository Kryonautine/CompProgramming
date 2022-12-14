#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int> sum_arr;
	vector<int> c1;
	vector<int> c2;

	for (int i = 0; i < n ; i++) {
		int sum;
		cin >> sum;

		sum_arr.push_back(sum);
	}

	for (int i = 0; i < n ; i++) {
		
		int sum = sum_arr[i];
		
		int two = sum / 3;
		int one = sum / 3;
		if (sum % 3 == 1) {
			one++;
		}
		if (sum % 3 == 2) {
			two++;
		}

		c1.push_back(one);
		c2.push_back(two);

	}

	for (int i = 0; i < n ; i++) {
		cout << c1[i] << " " << c2[i] << endl;
	}
	
}