// Codeforces Round #166 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

/*
NOTES:
Just do it. Problem answer is simple, boring and long to write, but there is no need for a better way
Only check for better ways when issues are faced/ approach failed.
At least by then, you'll have a better idea to do it.
*/

int check_distinct(int next) {

	int ret = 0;
	int a = next / 1000;
	int b = ((next / 100) % 10);
	int c = ((next / 10) % 10);
	int d = next % 10;

	// cout << a << "|" << b << "|" << c << "|" << d << endl;

	if ((a!=b) && (a!=c) && (a!=d) && (b!=c) && (b!=d) && (c!=d)) {
		ret = 1;
	}
	
	return ret;
}

int main() {

	int year, next;
	cin >> year;

	next = year + 1;

	while (check_distinct(next) != 1) {
		next++;
	}

	cout << next;

}