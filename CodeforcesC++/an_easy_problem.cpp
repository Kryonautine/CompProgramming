// Technocup 2019 - Elimination Round 1 :: Problem A

#include <iostream>
using namespace std;

int main() {

	int n, easy = 0;
	cin >> n;

	for (int i = 0; i < n ; i++) {
		int temp;
		cin >> temp;
		if (temp == 1) {
			easy = 1;
			break;
		}
	}

	if (easy) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}
}