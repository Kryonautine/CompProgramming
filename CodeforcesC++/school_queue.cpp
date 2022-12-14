// Codeforces Round #163 (Div. 2) :: Problem B

#include <iostream>
#include <string>
using namespace std;

int main() {

	int n, t;
	cin >> n >> t;

	string line;
	cin >> line;

	for (int i = 0; i < t; i++) {
		// Repeat swap checking function t times
		for (auto iter = line.begin(); iter < line.end(); iter++) {
			// Converts all BG into GB for one time
			if ((*(iter+1) == 'G') && ( *iter == 'B' )) {
				// Swapping positions. iter++ to prevent BGG becoming GGB (cascade)
				*(iter+1) = 'B';
				*iter = 'G';
				iter++;
			}
		}
	}

	cout << line;

}