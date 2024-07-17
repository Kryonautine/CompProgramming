// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;
        long long max_w = 0;

        for (long long j = 1; j <= k; j++) {
            if (j>x) {break;}
            if (k % j == 0) {
                long long rem_k = k/j;
                for (long long l = 1; l <= rem_k; l++) {
                    if (l>y) {break;}
                    if (rem_k % l == 0) {
                        long long m = rem_k/l;
                        if (m <= z) {
                            long long check;
                            check = (x - j + 1) * (y - l + 1) * (z - m + 1);
                            max_w = max(max_w, check);
                        }
                    }
                }
            }
        }

        cout << max_w << endl;
    }
}