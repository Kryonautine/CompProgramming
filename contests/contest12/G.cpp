// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long dp[5001];
vector<long long> mult = {1, 2, 1};
// dp[3] = 31;
// dp[4] = 78;
// dp[5] = 184;
// vector<long long> mult = {1, 6, 15, 20, 15, 6, 1};

// INCOMPLETE

long long DP(long long i) {

    if (i <= 0) {
        return 0;
    }

    if (dp[i] != -1) {
        return dp[i];
    }
    cout << "DP[" << i << "] = ";

    long long ans = DP(i-1);
    cout << ans << " + ";
    for (long long j = 0; j < mult.size(); j++) {
        if (i > (j*2+3)) {
            cout << mult[j] << "*" <<  (j*2 + 2) << " " << -1 << " + ";
            ans += mult[j] * (j*2 + 2) - 1;
        }
        else {
            cout << mult[j] << "*" <<  (j*2 + 3) << " + ";
            ans += mult[j] * (j*2 + 3);
        }
    }
    cout << endl;
    vector<long long> mult2 = mult;
    for (long long j = 0; j < mult.size(); j++) {
        cout << mult[j] << " , ";
    }
    cout << endl;
    for (long long j = 1; j < mult.size(); j++) {
        mult[j] += mult2[j-1];
    }
    mult.push_back(1);

    return ans;
}

int main() {
    int t;
    cin >> t;
    memset(dp, -1, sizeof(dp));

    for (int i = 0 ; i < t ; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 4  << endl;
            continue;
        }
        if (n == 2) {
            cout << 12  << endl;
            continue;
        }
        dp[0] = 4;
        dp[1] = 12;
        // if (n == 3) {
        //     cout << 31  << endl;
        //     continue;
        // }
        // if (n == 4) {
        //     cout << 78  << endl;
        //     continue;
        // }
        // if (n == 5) {
        //     cout << 184  << endl;
        //     continue;
        // }
        cout << DP(i) << endl;
    }
}