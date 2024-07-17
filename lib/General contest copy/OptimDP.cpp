// Atcode.jp DP contest :: Problem A

#include <bits/stdc++.h>
using namespace std;

long n;
long h[100001];
long dp[100001];

long DP(long i) {

    if (i <= 0) {
        dp[i] = 0;
        return 0;
    }

    if (dp[i] != -1) {return dp[i];}

    long ans = DP(i-1) + abs(h[i] - h[i-1]);
    if (i > 1) {
        ans = min(ans, DP(i-2) + abs(h[i] - h[i-2]));
    }

    dp[i] = ans;
    return ans;

}

int main() {

    cin >> n;

    for (long i = 0 ; i < n ; i++) {
        cin >> h[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << DP(n-1) << endl;

    return 0;
}