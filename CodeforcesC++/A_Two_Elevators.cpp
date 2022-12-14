// Codeforces Round #820 (Div. 3) :: Problem A

#include <bits/stdc++.h>
using namespace std;

int main() {

	int num_testcases;
	cin >> num_testcases;

	for (int i = 0; i < num_testcases ; i++) {

		int ele1_start, ele2_start, ele2_end;
		cin >> ele1_start >> ele2_start >> ele2_end;

		int time1, time2;

		time1 = ele1_start-1;
		time2 = ele2_start-ele2_end;
		if (time2 < 0) {
			time2 -= 2*time2; // Taking mod if negative
		}

		time2 += ele2_end-1;

		if (time1<time2) {
			cout << "1" << endl;
		}
		if (time1>time2) {
			cout << "2" << endl;
		}
		if (time1==time2) {
			cout << "3" << endl;
		}

	}

}