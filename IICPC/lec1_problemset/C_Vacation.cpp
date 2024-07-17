// Atcode.jp DP contest :: Problem D

#include <bits/stdc++.h>
using namespace std;

long long n;
long long a[100001], b[100001], c[100001];
long long dp[100001][3];
// 1 <= N <= 100000 // i
// 1 <= a_i, b_i, c_i <= 10000

long long DP(long long i, long long choice) {

    if (dp[i][choice] != -1) {return dp[i][choice];}

    dp[i][0] = max(DP(i-1, 1), DP(i-1, 2)) + a[i];
    dp[i][1] = max(DP(i-1, 0), DP(i-1, 2)) + b[i];
    dp[i][2] = max(DP(i-1, 0), DP(i-1, 1)) + c[i];

    return max(max(dp[i][0], dp[i][1]), dp[i][2]);

}

int main() {

    cin >> n;

    for (long long i = 0 ; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    memset(dp, -1, sizeof(dp));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    DP(n-1, 0);
    DP(n-1, 1);
    DP(n-1, 2);

    long long ans = max(max(dp[n-1][0], dp[n-1][1]), dp[n-1][2]);

    cout << ans << endl;

    return 0;
}