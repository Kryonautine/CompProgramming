// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long sum_digit(long long x) {
    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x/=10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long l, r, k;
        cin >> l >> r >> k;
    }
}