// Codeforces Round 931 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t;

    cin >> t;

    for (long long i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        long long coin_count = n/15;
        long long rem = n%15;
        if ((rem == 1) || (rem == 3) || (rem == 6) || (rem == 10) || (rem == 5)) {
            coin_count+=1;
        }
        if ((rem == 2) || (rem == 4) || (rem == 7) || (rem == 9) || (rem == 11) || (rem == 12) || (rem == 13) || (rem == 8)) {
            coin_count+=2;
        }
        if ((rem == 14)) {
            coin_count+=3;
        }
        if (n == 5) {
            coin_count+=2;
        }
        if (n==8) {
            coin_count++;
        }
        cout << coin_count << endl;
    }

    return 0;
}