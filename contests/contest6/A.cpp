// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n; // Size of s.
        cin >> n;
        string s;
        cin >> s;
        string ans = "YES";

        char last = s[0];

        for (int j = 1 ; j < n ; j++) {
            
            // 48 = 0, 57 = 9, 97 = a, 122 = z

            // Check 2
            if ((last > 96) && (s[j] < 58)) {ans = "NO"; break;}

            // Check 3
            if ((last < 58) && (s[j] < 58)) {
                if (last > s[j]) {ans = "NO";break;}
            }
            // Check 4
            if ((last > 96) && (s[j] > 96)) {
                if (last > s[j]) {ans = "NO";break;}
            }

            last = s[j];

        }

        cout << ans << endl;
    }
}