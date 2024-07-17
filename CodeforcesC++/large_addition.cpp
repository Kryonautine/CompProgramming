// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        
        long long rem = n%10;
        long long n2 = n/10;

        // Has to be greater than 9
        if (n2<1) {
            cout << "NO" << endl;
            continue;
        }

        // last digit cannot be 9
        if (rem == 9) {
            cout << "NO" << endl;
            continue;
        }

        // middle digits cannot be 0
        long long done = 0;
        while (n2>9) {
            rem = n2%10;
            if (rem==0) {cout << "NO" << endl;done=1;break;}
            n2/=10;
        }
        if (done == 1) {
            continue;
        }

        // first digit has to be 1
        if (n2 != 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}