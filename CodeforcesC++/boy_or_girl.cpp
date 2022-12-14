// Codeforces Round #146 (Div. 2) :: Problem A

#include <iostream>
#include <string>
#include <array>
using namespace std;

/*
Notes:
Found out how to use <array> objects in C++, tried iterators instead of index variables for everything.
If you wanna learn more, you gotta experiment!
*/

int main() {

	array<int, 26> uniq_char;
	for (auto iter = uniq_char.begin(); iter < uniq_char.end(); iter++) {
		*iter = 0;
	}

	string s;
	cin >> s;

	// a = 97
	for (auto iter = s.begin(); iter <= s.end();iter++) {
		// Does not account for characters that aren't between a-z
		uniq_char[*iter-'a']=1;
	}

	int uniq=0;

	for (auto iter = uniq_char.begin(); iter < uniq_char.end(); iter++) {
		if (*iter!=0) {
			uniq++;
		}
	}


	if (uniq % 2) {
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
}