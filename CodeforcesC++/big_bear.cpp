// Codeforces Round #405 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {
	
	int a, b;
	cin >> a >> b;

	int years = 0;

	while (a<=b) {
		years++;
		a*=3;
		b*=2;
	}

	cout << years;
}