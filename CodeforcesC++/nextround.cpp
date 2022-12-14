// VK Cup 2012 Qualification Round 1

#include <iostream>
using namespace std;

int main(void) {
	int num_contestants, k, advancing=0;
	cin >> num_contestants >> k;

	int contestant_array[num_contestants];

	for (int i=0;i<num_contestants;i++) {
		cin >> contestant_array[i];
	}

	for (int i=0;i<num_contestants;i++) {
		if ((contestant_array[i] > 0) && (contestant_array[i] >= contestant_array[k-1])) {
			advancing++;
		}
		else {
			break; // Remaining elements are definitely not greater.
		}
	}

	cout << advancing << endl;
}