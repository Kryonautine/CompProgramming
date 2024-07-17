// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long abs_sub(long a, long b) {
    long ans = a-b;
    if (a >= b) {ans = a-b;}
    else {ans = b - a;}
    return ans;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long n, d;
        cin >> n >> d;
        long x[n], y[n];
        for (long j = 0 ; j < n ; j++) {
            cin >> x[j] >> y[j];
        }

        for (long j = 0 ; j < n ; j++) {
            for (long k = j ; k < n ; k++) {
                long dist = abs_sub(x[j], x[k]) + abs_sub(y[j], y[k]);
                if (dist )
            }
        }
    }
}