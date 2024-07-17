// Atcode.jp DP contest :: Problem A

#include <bits/stdc++.h>
using namespace std;

string s;
string t;
long t_s;
long s_s;
long max_size;
long min_size;
long dp[3001][26];

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
    cin >> s >> t;
    s_s = s.size();
    t_s = t.size();
    max_size = max(t_s, s_s);
    min_size = min(t_s, s_s);

    memset(dp, -1, sizeof(dp));
    cout << DP(max_size-1) << endl;

    return 0;
}