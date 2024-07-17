// Atcode.jp DP contest :: Problem D

#include <bits/stdc++.h>
using namespace std;

long t, n;
long a[200001];

int main() {
    
    cin >> t;

    for (long j = 0; j < t; j++) {
        cin >> n;

        for (long i = 0 ; i < n ; i++) {
            cin >> a[i];
        }

        long min_arr[n];
        long max_arr[n];
        min_arr[0] = a[0];
        max_arr[0] = abs(a[0]);
        for (long i = 1 ; i < n ; i++) {
            min_arr[i] = min_arr[i-1] + a[i];
            max_arr[i] = max(abs(max_arr[i-1] + a[i]), abs(min_arr[i-1]) + a[i]);
        }
        cout << max(abs(min_arr[n-1]), max_arr[n-1]) << endl;
    }
}