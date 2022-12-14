// Codeforces Global Round 10 :: Problem A

#include <iostream>
#include <vector>
using namespace std;

/*
NOTES:
Problem is on math, but requires no computation
If elements are not all same, answer is always 1 as you can always add any of the non-equal elements continuously.
*/

int main() {

	int testcases;
	cin >> testcases;
	int answer[testcases];

	for ( int i = 0 ; i < testcases ; i++) {

		int length;
		cin >> length;
		vector<int> password;
		int uniq=1;

		for (int j = 0; j < length ; j++) {
			int temp;
			cin >> temp;
			password.push_back(temp);
		}

		for (auto j = password.begin()+1; j < password.end(); j++) {
			if (*j != *(j-1)) {
				uniq=0;
				break;
			}
		}

		if (uniq == 0) {
			answer[i] = 1;
		}
		else {
			answer[i] = length;
		}

	}

	for ( int i = 0 ; i < testcases ; i++) {
		cout << answer[i] << endl;
	}
}