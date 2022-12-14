// Codeforces Beta Round #55 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s, outl, outu;
	cin >> s;
	outl = s; // Converts everything to uppercase
	outu = s; // Converts everything to lowercase
	int lower = 0, upper = 0;

	// upper,lower determine whether to send outu or outl as output
	for (auto iter1 = s.begin(), iter2 = outl.begin(), iter3 = outu.begin(); iter1 < s.end(); iter1++, iter2++, iter3++) {
		// cout << *iter1 << "|" << lower << "|" << upper << endl;
		if (*iter1 > 96) { // 97 == a
			*iter3 -= 32;
			lower++;
		}
		else {
			*iter2 += 32;
			upper++;
		}
		// cout << *iter1 << "|" << *iter2 << "|" << *iter3 << endl;
	}

	if (upper > lower) {cout << outu;}
	else {cout << outl;}
}