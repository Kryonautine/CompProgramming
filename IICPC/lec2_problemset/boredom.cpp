// Codeforces Round 455 (Div. 2) :: Problem A

#include <bits/stdc++.h>
using namespace std;

long long n;
long long arr[100002];
long long dp[100002];

long long DP(long long n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return arr[1];
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    long long ans = n*arr[n];

    ans += max(DP(n-1) - n*arr[n], DP(n-2));

    dp[n] = ans;
    return ans;

}

int main() {
    cin >> n;

    memset(arr, 0, sizeof(arr));
    memset(dp, -1, sizeof(dp));
    long long maxn = 0;
    for (long long i = 0 ; i < n ; i++) {
        long long x;
        cin >> x;
        maxn = max(maxn, x);
        arr[x]++;
    }

    cout << DP(maxn) << endl;
}