// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    for (long long i = 0 ; i < t ; i++) {
        long long n, f, k;
        cin >> n >> f >> k;
        if (k == n) {cout << "YES" << endl;}
        else {

        vector<long long> arr;
        
        for (long long j = 0 ; j < n ; j++) {
            long long x;
            cin >> x;
            arr.push_back(x);
        }

        long long fav_val = arr[f-1];

        sort(arr.begin(), arr.end(), greater<long long>());

        long long rem_val = arr[k-1];
        long long stay_val = arr[k];

        if ((rem_val == stay_val) && (fav_val == rem_val)) {cout << "MAYBE" << endl;};
        if ((rem_val > stay_val) && (fav_val == rem_val)) {cout << "YES" << endl;}
        if ((rem_val < stay_val) && (fav_val == rem_val)) {cout << "YES" << endl;} // This isn't allowed, but whatever
        if (fav_val < rem_val) {cout << "NO" << endl;}
        if (fav_val > rem_val) {cout << "YES" << endl;}

        }
    }
}