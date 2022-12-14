// Codeforces Round #543 (Div. 2, based on Technocup 2019 Final Round) :: Problem A

#include <iostream>
using namespace std;

/*
NOTES:
Somewhat interesting problem
*/

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int power[n];
	int school[n];
	int chosen[k];

	for (int i = 0; i < n ; i++) {
		cin >> power[i];
	}

	for (int i = 0; i < n ; i++) {
		cin >> school[i];
	}

	for (int i = 0; i < k ; i++) {
		cin >> chosen[i];
	}

	// max_school stores maximum power of student in given school, checks individually
	int max_school[m+1];
	for (int i = 0; i < m+1; i++) {
		max_school[i] = 0;
	}
	for (int i = 0 ; i < n ; i++) {
		if (power[i] > max_school[school[i]]) {
			max_school[school[i]] = power[i];
		}
	}

	int min_madeup = 0;
	for (int i = 0; i < k; i++) {
		// cout << i << " | " << chosen[i] << " -- " << school[chosen[i]-1] << " <> " << power[chosen[i]-1] << " -- " << max_school[school[chosen[i]-1]] << endl;
		/*
		chosen[i]-1 is the index of chosen.
		We check if the power of the chosen > the maximum power in his school, if not, we create new school.
		*/
		if (power[chosen[i]-1] < max_school[school[chosen[i]-1]]) {
			min_madeup++;
		}
	}
	
	/*
	for (int i = 0; i < m+1; i++) {
		cout << max_school[i] << " ";
	}
	cout << endl;
	*/

	cout << min_madeup;
}