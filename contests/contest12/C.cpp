// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n, m, k;
        cin >> n >> m >> k;
        long long iter = n;
        for (long long j = iter ; j >= k ; j--) {
            cout << j << " ";
        }
        for (long long j = k-1 ; j > m ; j--) {
            cout << j << " ";
        }
        for (long long j = 1 ; j <= m ; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}