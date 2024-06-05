// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n;
        cin >> n;
        int m;
        cin >> m;

        if (m > n) {cout << "NO" << endl;}
        else {
            if (((n - m) % 2) == 0) {cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }
    }
}