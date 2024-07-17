// CSES fi Problemset :: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

#define NOT_CALC 10000001
#define NOT_POSSIBLE 20000002

long long n, x; 
long long coins[101];
long long dp[1000001];
// 1 <= N <= 1,000,000
// NOT_CALC, NOT_POSSIBLE > 1,000,000 because we use min (otherwise it'd be -1,-2)

long long DP(long long i) {

    if (i < coins[0]) {
        dp[i] = NOT_POSSIBLE;
        return NOT_POSSIBLE;
    }

    if (dp[i] != NOT_CALC) {return dp[i];}

    long long ans = NOT_CALC;

    for (long long j = 0; j < n; j++) {
        if ((i-coins[j]) > 0) {
            ans = min(ans, DP(i-coins[j]) + 1);
        }
    }

    if (ans == NOT_CALC) {ans = NOT_POSSIBLE;}
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

    for (long long j = 0; j < n; j++) {
        dp[coins[j]] = 1;
    }

    long long ans = DP(x);
    if (ans == NOT_POSSIBLE) {
        cout << -1 << endl;
    }
    else {
        cout << ans << endl;
   }

    return 0;
}