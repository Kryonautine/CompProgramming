#include <bits/stdc++.h>
using namespace std;

int main() {
	long test;
	cin >> test;
	vector<long> answer;
	for (long i = 0 ; i < test ; i++) {
		long n, m;
		cin >> n >> m;
		priority_queue <int, vector<int>, greater<int> > pq;
		long a_sum=0;
		for (long j = 0 ; j < n ; j++) {
			long temp;
			cin >> temp;
			pq.push(temp);
			a_sum += temp;
		}
		long temp1;
		cin >> temp1;
		a_sum -= pq.top();
		pq.pop();
		pq.push(temp1);
		a_sum += temp1;
		for (long j = 0 ; j < m-1 ; j++) {
			long temp;
			cin >> temp;
			a_sum += temp;
			pq.push(temp);
			a_sum -= pq.top();
			pq.pop();
		}
		answer.push_back(a_sum);
	}
	for (long i = 0 ; i < test ; i++) {
		cout << answer[i] << endl;
	}
}