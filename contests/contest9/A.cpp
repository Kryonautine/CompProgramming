// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long max_lon(long a, long b) {
    if (a >= b) {return a;}
    return b;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long n;
        cin >> n;
        long arr[n];

        for (long j = 0 ; j < n ; j++) {
            cin >> arr[j];
        }

        long min = max_lon(arr[0], arr[1]);

        for (long j = 1 ; j < n; j++) {
            long max_2_sub = max_lon(arr[j], arr[j-1]);
            if (min > max_2_sub) {
                min = max_2_sub;
            }
        }

        cout << min-1 << endl;
    }
}