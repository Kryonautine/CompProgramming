// Codeforces Beta Round #84 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int lucky;
	long long num;
	cin >> num;

	string str_num = to_string(num); // Converts numbers into strings

	for (auto iter = str_num.begin(); iter < str_num.end(); iter++) {
		if ((*iter == '4') || (*iter == '7')) {
			lucky++;
		}
	}

	if ((lucky == 4) || (lucky == 7)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}