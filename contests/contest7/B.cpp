// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long memo[2000000000][1000000000];

long long OR(long long num) {
    return ((num-1)|(num)|(num+1));
}

long long memo_set(long long num, long long turn) {
    if (memo[num][turn] != -1) {
        return memo[num][turn];
    }
    else {
        if (turn == 0) {
            memo[num][turn] = num;
        }
        else {
            memo[num][turn] = OR(memo_set(num, turn-1));
        }
        return memo[num][turn];
    }
}

int main() {

    memset(memo, -1, sizeof(memo));

    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        long long m;
        cin >> m;

        cout << memo_set(n, m) << endl;

        // vector<long long> arr;
        // long long arr_size = 0;
        // if (n >= m) {
        //     arr_size = 1 + 2*m;

        //     for (long long j = 0; j < arr_size; j++) {
        //         arr.push_back(n - m + j);
        //     }
        // }
        // else {
        //     arr_size = 1 + m + n; // 1+2*m-(m-n)

        //     for (long long j = 0; j < arr_size; j++) {
        //         arr.push_back(j);
        //     }
        // }
    }
}