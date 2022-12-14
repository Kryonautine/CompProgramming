// Codeforces Round #200 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	long long  n;
	cin >> n;
	long long  fn=0;

	if (n % 2 == 0) {
		fn = n/2;
	}
	else {
		fn = -(n+1)/2;
	}

	cout << fn;
}