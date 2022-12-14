// Codeforces Round #163 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	int stones;
	cin >> stones;

	string s;
	cin >> s;

	int erase;

	for (auto iter = s.begin(); iter < s.end(); iter++) {
		if (*iter == *(iter+1)) {
			s.erase(iter+1); // Removes next element if same as current
			erase++;
			iter--; // Goes back in case next-next element is also same
		}
	}

	cout << erase;
	// cout << endl << s << endl;
}