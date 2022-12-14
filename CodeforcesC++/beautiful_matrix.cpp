// Codeforces Round #161 (Div. 2) :: Problem A

#include <iostream>
#include <array>
using namespace std;

int int_modulus(int x) {
	if (x<0) {
		x -= 2*x;
	}
	return x;
}

int main() {

	int matrix, one;
	for (int i=0; i<25;i++) {
		cin >> matrix;
		if (matrix ==1) {
			one = i;
		}
	}

	int x = one / 5;
	int y = one % 5;

	// cout << one << endl << x << endl << y << endl;
	cout << int_modulus(x-2) + int_modulus(y-2);
}