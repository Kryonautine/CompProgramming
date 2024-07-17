
#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t; // 1 <= t <= 1000
    cin >> t;

    for (long long i = 0; i < t; i++) {
        long long n; // 2 <= n <= 50
        cin >> n;

        long long a[n];
        // 0 <= a_i <= 99

        for (long long j = 0; j < n; j++) {
            cin >> a[j];
        }

        long long possible = 1;
        long long last = a[0];
        if (last > 9) {
            long long l1 = last/10;
            long long l2 = last%10;
            if (l1 <= l2) {
                last = l2;
            }
        }
        for (long long j = 1; j < n; j++) {
            long long n0 = a[j];
            if (n0 > 9) {
                long long n1 = n0/10;
                long long n2 = n0%10;
                if ((last <= n1) && (n1<=n2)) {
                    last = n2; continue;
                }
                else {
                    if (last <= n0) {
                        last = n0; continue;
                    }
                    else {
                        possible = 0; break;
                    }
                }
            }
            else {
                if (last <= n0) {
                    last = n0; continue;
                }
                else {
                    possible = 0;
                    break;
                }
            }
        }

        if (possible == 1) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}