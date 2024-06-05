// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    for (long long i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        vector<long long> s;
        s.clear();

        while (n > 0) {
            long long check1 = (long long) n / 2LL;
            long long check2 = (long long) n % 2LL;
            if (check1 > 0) {
                if (check2 == 0) {s.push_back(0);}
                else {s.push_back(1);}
            }
            else {s.push_back(1);}
            n = n/2LL;
        }

        cout << s.size() << endl;

        for (long long j = 0; j < s.size() - 1; j++) {
            cout << s[j] << " ";
        }
        cout << s[s.size() - 1];
        cout << endl;
    }
}