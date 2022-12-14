
#include <bits/stdc++.h>
using namespace std;

void print_arr(vector<int> arr) {
	cout << "ARRAY = ";
	for (auto iter = arr.begin(); iter < arr.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;
}

void sort(vector<int>& arr) {

	for (int i = 0; i < arr.size() + 1; i++) {
		for (auto iter = arr.begin(); iter < arr.end()-1; iter++) {
			if (*iter > *(iter+1)) {
				/*
				int temp = *iter;
				*iter = *(iter+1);
				*(iter+1) = temp;
				*/
				iter_swap(iter, (iter+1));
			}
			// print_arr(arr);
		}
	}

}

int check(vector<int> arr) {
	for (auto iter = arr.begin(); iter < arr.end()-1; iter++) {
		if (*(iter+1) > *iter + 1) {
			return 0;
		}
	}
	return 1;
}

int main() {

	int t;
	cin >> t;
	vector<int> ret;

	for (int i = 0; i < t ; i++) {

		int n;
		cin >> n;
		vector<int> arr;
		for (int i = 0; i < n ; i++) {
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		// print_arr(arr);
		sort(arr);
		// print_arr(arr);

		int possible = check(arr);

		ret.push_back(possible);
	}

	for (int i = 0; i < t ; i++) {
		if (ret[i] == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
}