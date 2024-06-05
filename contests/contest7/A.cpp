// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long l;
        cin >> l;
        long r;
        cin >> r;

        long rpow = 0;

        while (r > 1) {
            r = r/2;
            rpow++;
        }

        cout << rpow << endl;
    }
}