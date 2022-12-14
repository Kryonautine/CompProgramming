// Codeforces Round #340 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {

	int dist, steps = 0;
	cin >> dist;

	while (dist > 0) {
		dist -= 5;
		steps++;
	}

	cout << steps;
}