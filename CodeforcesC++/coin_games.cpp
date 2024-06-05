// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n, u=0, d=0;
        cin >> n;
        string s;
        cin >> s;

        for (int j = 0 ; j < n ; j++) {
            if (s[j] == 'U') {u++;}
            if (s[j] == 'D') {d++;}
        }

        // If the number of coins up is odd, 1st person wins. There is some trick, but I found it only through trial and error.
        if (u % 2) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
}