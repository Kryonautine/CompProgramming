// Codeforces Round #479 (Div. 3) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	while (k>0) {
		if (n % 10 > 0) {
			n--;
		}
		else {
			n /= 10;
		}
		k--;
	}

	cout << n;

}