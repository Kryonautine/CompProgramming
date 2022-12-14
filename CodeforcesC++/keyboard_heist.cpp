// Codeforces Round #200 (Div. 2) :: Problem A

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> keyboard;

	for (int i = 0; i<n; i++) {
		int temp;
		cin >> temp;
		keyboard.push_back(temp);
	}

	sort(keyboard.begin(), keyboard.end());

	/*
	for (int i = 0; i<n; i++) {
		cout << keyboard[i] << "|";
	}
	cout << endl;
	*/

	int answer = *(keyboard.end()-1) - *(keyboard.begin()) + 1 - keyboard.size();
	//cout << *(keyboard.begin()) << "|" << *(keyboard.end()-1) << "|" << keyboard.size() << endl;

	cout << answer;
}