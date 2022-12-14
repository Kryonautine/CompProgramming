// Codeforces Round #304 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int k, n, w, borrow, sum = 0;
	cin >> k >> w >> n;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	sum *= k;

	borrow = sum - w;
	if (borrow > 0) {
		cout << borrow;
	}
	else {
		cout << "0";
	}
}