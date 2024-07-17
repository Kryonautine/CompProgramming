// CSES fi Problemset :: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

long long n; 
long long dp[1000001];
// 1 <= N <= 1,000,000

// Incomplete. See to it later

long long power_f(long long x, long long y) {
    long long ans = 1;
    for (long long i = 0; i < y; i++) {
        ans*=x;
    }
    return ans;
}

long long DP(long long i) {

    if (i == 1) {
        dp[i] = 1;
        return 1;
    }

    if (dp[i] != -1) {return dp[i];}

    long long ans = 0;

    if (i <= 6) {
        ans = power_f(2, i-1);
    }
    else {
        for (long long j = 1; j < 7; j++) {
            ans += DP(i-j);
            ans = ans % (power_f(10, 9) + 7);
        }
    }

    dp[i] = ans;
    return ans;

}

int main() {

    cin >> n;

    memset(dp, -1, sizeof(dp));
    cout << DP(n) << endl;

    return 0;
}