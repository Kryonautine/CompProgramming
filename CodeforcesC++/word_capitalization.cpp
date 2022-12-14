// Codeforces Round #172 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;

	// a = 97
	if (s.length() > 0) {
		if (s[0] > 96) {
			s[0] -= 32;
		}
	}

	cout << s;
}