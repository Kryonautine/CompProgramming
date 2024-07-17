// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long n, m , k;
string s;

long long dp[200002];

#define IMPOSS 22000001

long long DP(long long i) {

    if (i <= 0) {
        return 0;
    }

    if (dp[i] != -1) {return dp[i];}

    long long ans = IMPOSS;
    for (long long j = 1; j <= m; j++) {
        if (s[i-j] == 'W') {
            if (j == 1) {
                ans = min(ans, DP(i-j) + 1);
            }
            continue;
        }
        if (s[i-j] == 'L') {
            ans = min(ans, DP(i-j));
            continue;
        }
        if (s[i-j] == 'C') {
            continue;
        }
    }

    dp[i] = ans;
    return ans;

}
int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        memset(dp, -1, sizeof(dp));
        cin >> n >> m >> k;
        cin >> s;
        s.insert(0, "L");

        dp[0] = 0;
        long long ans = DP(n+1);
        if (ans > k) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}