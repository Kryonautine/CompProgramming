#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	long testcases;
	cin >> testcases;
	vector<int> num_changes;
	vector<int> changed;
	vector<int> prev;

	/*
	ofstream out("out.txt");
	auto coutbuf = cout.rdbuf(out.rdbuf());
	*/

	for (int i = 0; i < testcases; i++) {
		int changes=0;
		long length;
		cin >> length;
		vector<int> array;

		// cout << length << endl;

		for (long j = 0; j < length; j++) {
			long temp;
			long pow2=0;
			cin >> temp;
			long temp2 = temp;
			while (temp2>1) {temp2/=2;pow2++;}
			long greater = pow(2, pow2);

			// cout << greater << " " << temp << endl;

			if (greater != temp) {
				changes++;
				prev.push_back(j+1);
				changed.push_back(greater*2-temp);
			}
		}
		num_changes.push_back(changes);

		// cout << endl;
	}

	/*
	cout.rdbuf(coutbuf); 
	cout << "xxxxxxx---------xxxxxxxxxxxxxx" << endl;
	*/

	long done=0;
	for (int i = 0 ; i < num_changes.size(); i++) {
		cout << num_changes[i] << endl;
		for (int j = 0 ; j < num_changes[i]; j++) {
			cout << prev[j+done] << " " << changed[j+done] << endl;
		}
		done += num_changes[i];
	}
}