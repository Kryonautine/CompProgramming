// Codeforces Round #173 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int num_statements;

	cin >> num_statements;

	int var_x = 0;

	for (int i = 0; i < num_statements; i++) {

		string s;
		cin >> s;

		if (s[1] == '+') { // X has to be at end or beginning
			var_x++;
		}
		else {
			var_x--;
		}

	}

	cout << var_x << endl;
}