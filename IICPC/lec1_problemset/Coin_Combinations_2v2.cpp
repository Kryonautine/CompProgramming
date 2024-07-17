// CSES fi Problemset :: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

#define NOT_CALC 0
#define COIN 1
#define MODULO 1000000007

long long n, x; 
long long coins[101];
long long dp[1000001];
// 1 <= N <= 1,000,000
// NOT_CALC, COIN > 1,000,000 because we use min (otherwise it'd be -1,-2)

long long DP(long long i) {

    // Basically the same logic as Sieve of Erasthones.
    // It had to be Bottom-Up DP. Top-Down doesn't work with this.
    for (long long j = 0; j < n; j++) {
        dp[coins[j]]++;
        for (long long k = 0; k < x+1; k++) {
            if ((k-coins[j]) > 0) {
                dp[k] += dp[k - coins[j]];
                dp[k] %= MODULO;
            }
        }

        // for (long long k = 0; k < x+1; k++) {
        //     cout << dp[k] << " ";
        // }
        // cout << endl;
    }
    return dp[i];
}

int main() {

    cin >> n >> x;

    for (long long i = 0; i < n; i++) {
        cin >> coins[i];
    }
    sort(coins, coins+n);

    // memset doesn't work for values other than 0/-1
    for (long long j = 0; j < x+1; j++) {
        dp[j] = NOT_CALC;
    }

    dp[0] = 0;
    // for (long long j = 0; j < n; j++) {
    //     dp[coins[j]] = COIN;
    // }

    long long ans = DP(x);
    cout << ans << endl;

    return 0;
}