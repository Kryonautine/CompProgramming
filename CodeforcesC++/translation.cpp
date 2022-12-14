// Codeforces Beta Round #40 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s1, s2, out;
	cin >> s1 >> s2;

	for (auto iter1 = s1.begin(), iter2 = s2.end()-1; iter1 < s1.end(); iter1++, iter2--) {
		//cout << *iter1 << "|" << *iter2 << endl;
		if (*iter1 == *iter2) {
			out = "YES";
			continue;
		}
		out = "NO";
		break;
	}

	cout << out;
}