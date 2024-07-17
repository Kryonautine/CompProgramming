// Atcode.jp DP contest :: Problem D

#include <bits/stdc++.h>
using namespace std;

long n, W;
long w[101];
long v[101];
long dp[101][100001];
// 1 <= N <= 100, 1 <= W <= 100000

long DP(long i, long w_taken) {

    if (i == n) {
        if (w[i] <= W-w_taken) {
            dp[i][w_taken] = v[i];
            return v[i];
        }
        else {
            dp[i][w_taken] = 0;
            return 0;
        }
    }

    if (dp[i][w_taken] != -1) {return dp[i][w_taken];}

    long ans = DP(i+1, w_taken);
    if (w[i] <= W-w_taken) {
        ans = max(ans, DP(i+1, w_taken + w[i]) + v[i]);
    }

    dp[i][w_taken] = ans;
    return ans;

}

int main() {

    cin >> n >> W;

    for (long i = 0 ; i < n ; i++) {
        cin >> w[i] >> v[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << DP(0, 0) << endl;

    return 0;
}