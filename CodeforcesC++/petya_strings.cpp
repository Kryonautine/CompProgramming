// Codeforces Beta Round #85 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s1, s2;
	cin >> s1 >> s2;

	// A = 65 , Z = 90 , a = 97
	// Loop equalizes all Capital characters to small
	// Does not account for different length strings
	for (auto iter1 = s1.begin(), iter2 = s2.begin(); iter1 <= s1.end();iter1++, iter2++) {
		if (*iter1>96) {
			*iter1-=32;
		}
		if (*iter2>96) {
			*iter2-=32;
		}
	}

	int out=0;
	// Individually compares each of the strings
	for (auto iter1 = s1.begin(), iter2 = s2.begin(); iter1 <= s1.end();iter1++, iter2++) {
		//cout << *iter1 << "|" << *iter2 << endl;
		if (*iter1==*iter2) {
			continue;
		}
		else {
			if (*iter1>*iter2) {
				out=1;
				break;
			}
			else {
				out=-1;
				break;
			}
		}
	}

	cout << out;
}