// Codeforces Round 490 (Div. 2) and Codecraft :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long pow2(long long y) {
    long long i = 1;
    for (long long j = 0; j < y;j++) {
        i*=2;
    }
    return i;
}

int main() {

    long long t;
    cin >> t;

    for (long long i = 0 ; i < t; i++) {

        long long n, k;
        cin >> n >> k;

        if (n==1) {cout << k << endl; continue;}

        long long y = (long long) log2(k);

        // Basically using max of 2 array spaces.
        // 1st is smallest power of 2 > k - 1, 2nd is k - arr[0]
        long long arr[n];
        if ((pow2(y+1) - 1) == k) {
            arr[0] = k;
            for (long long j = 1; j < n; j++) {
                arr[j] = 0;
            }
        }
        else {
            arr[0] = pow2(y) - 1;
            arr[1] = k-arr[0];
            for (long long j = 2; j < n; j++) {
                arr[j] = 0;
            }
        }

        for (long long j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}