// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long x, y;
        cin >> x >> y;
        long num_xor = x ^ y;
        // cout << num_xor << endl;
        long mult = 1;
        long rem = 0;
        while (rem == 0) {
            rem = num_xor % 2;
            num_xor /= 2;
            mult *= 2;
        }

        cout << mult/2 << endl;
    }
}