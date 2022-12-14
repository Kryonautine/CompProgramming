#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int inter = min(n, m);

	if (inter % 2 == 0) {
		cout << "Malvika";
	}
	else {
		cout << "Akshat";
	}
	
}