// Codeforces Round #200 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int drinks[n];
	double percent=0;

	for (int i = 0; i < n; i++) {
		cin >> drinks[i];
		percent += drinks[i];
	}

	percent /= n;

	cout << percent;

}