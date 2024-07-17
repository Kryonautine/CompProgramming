// CSES fi Problemset :: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

#define NOT_CALC -1
#define COIN -2
#define MODULO 1000000007

long long n, x; 
long long coins[101];
long long dp[1000001];
// 1 <= N <= 1,000,000
// NOT_CALC, COIN > 1,000,000 because we use min (otherwise it'd be -1,-2)

long long DP(long long i) {

    long long ans = 0;

    if ((dp[i] != NOT_CALC) && (dp[i] != COIN)) {return dp[i];}

    if (dp[i] == COIN) {ans++;} // If a coin number like 5 can be created by combinations of other coins (2+3)

    for (long long j = 0; j < n; j++) {
        if ((i-coins[j]) > 0) {
            ans += DP(i-coins[j]);
            ans %= MODULO;
        }
        else {break;}
    }

    dp[i] = ans;
    return ans;

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
    for (long long j = 0; j < n; j++) {
        dp[coins[j]] = COIN;
    }

    long long ans = DP(x);
    cout << ans << endl;

    return 0;
}