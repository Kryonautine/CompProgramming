// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        // 48 = 0, 57 = 9, 97 = a, 122 = z
        // 65 = A, 90 = Z
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> num_probs;
        int needed_probs = 0;

        for (int j = 0; j < 7; j++) {
            num_probs.push_back(0);
        }

        // Count
        for (int j = 0; j < n; j++) {
            num_probs[s[j] - 65]++;
        }

        // Check necessary num of problems

        for (int j = 0; j < 7; j++) {
            if (num_probs[j] < m) {
                needed_probs += m - num_probs[j];
            }
        }

        cout << needed_probs << endl;

    }
}