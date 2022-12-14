// Codeforces Round #143 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main(void) {
	int num_problems, implement=0;
	cin >> num_problems;

	for (int i=0;i<num_problems;i++) {
		int p, v, t; // To denote each of the team members capability.
		cin >> p >> v >> t;

		p += v + t;
		if (p >= 2) {
			implement++;
		}
	}

	cout << implement << endl; // Number of problems implemented.
}