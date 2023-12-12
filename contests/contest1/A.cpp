#include <bits/stdc++.h>
using namespace std;

int main() {
	long testcases;
	cin >> testcases;
	int answer[testcases];

	for (int i = 0; i < testcases; i++) {
		long length;
		cin >> length;
		vector<long> array;
		long odd=0, even=0;
		long min=100000;
		for (long j = 0; j < length; j++) {
			long curr=0;
			long temp;
			cin >> temp;
			array.push_back(temp);
			if (temp%2==0) {
				even++;
				while (temp%2==0) {temp/=2; curr++;}
			}
			else {
				odd++;
				while (temp%2!=0) {temp/=2; curr++;}
			}
			if (curr<min) {min=curr;}
		}
		if (odd % 2 == 0) {answer[i]=0;continue;}
		answer[i]=min;
	}

	for (int i = 0; i< testcases;i++) {
		cout << answer[i] << endl;
	}
}