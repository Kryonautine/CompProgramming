// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long long pow10(long long power2) {
    long long ans = 1;
    while (power2 > 0) {
        ans*=10;
        power2--;
    }
    return ans;
}

int main() {
    long long t;
    cin >> t;

    for (long long i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        long long power = 0;
        long long n2 = n;

        while (n2 > 0) {
            n2 /= 10;
            power++;
        }

        // else if (power == 2) {
        //     if ((n>= 10) && (n <= 18)) {cout << "YES" << endl;}
        //     else {cout << "NO" << endl;}
        // }
        if (power == 1) {cout << "NO" << endl;}
        else {
            long long lowest = 0;
            long long power2 = power-1;
            long long highest = 2*(pow10(power2)) - 2;
            while (power2>0) {
                lowest+= 1;
                lowest*= 10;
                power2--;
            }

            if ((n>= lowest) && (n<= highest) && ((n%10) != 9)) {cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }
    }
}