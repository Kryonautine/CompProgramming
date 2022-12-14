// Codeforces Round #379 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	int games, anton = 0, danik = 0;
	string s;
	cin >> games >> s;

	for (auto iter = s.begin(); iter < s.end(); iter++) {
		if (*iter == 'A') {
			anton++;
		}
		else {
			danik++;
		}
	}

	if (anton == danik) {
		cout << "Friendship";
	}
	else {
		if (anton < danik) {
			cout << "Danik";
		}
		else {
			cout << "Anton";
		}
	}
}