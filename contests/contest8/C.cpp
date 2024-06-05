// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        vector<long long> a;
        for (int j = 0 ; j < n ; j++) {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        vector<long long> b;
        for (int j = 0 ; j < n ; j++) {
            long long x;
            cin >> x;
            b.push_back(x);
        }
        long long m;
        cin >> m;
        vector<long long> d;
        for (int j = 0 ; j < m ; j++) {
            long long x;
            cin >> x;
            d.push_back(x);
        }
        

        // Solving
        long long diff = 0;
        vector<long long> diff_nums;
        for (int j = 0 ; j < n ; j++) {
            if (a[j] != b[j]) {
                diff++;
                diff_nums.push_back(b[j]);
            }
        }
        long long last_d = d[m-1];

        if (diff > m) {cout << "NO" << endl;}
        else { // <=

        // There's diff_nums_2 because I needed diff_nums for my previous solutions. Not anymore.
        vector<long long> diff_nums_2 = diff_nums;
        sort(diff_nums_2.begin(), diff_nums_2.end());
        sort(d.begin(), d.end());
        long long sub_array_check = diff;
        // This was an optimization from N^2 (M*N) to reduce TLE. Originally just compared every element of both arrays.
        // Check if diff_nums_2 is a subarray of d
        long long counter = 0;
        for (long long j = 0 ; j < m; j++) {
            if ((counter == diff) || (sub_array_check == 0)) {break;}
            if (d[j] > diff_nums_2[counter]) {sub_array_check = diff; break;}
            else {
                if (d[j] == diff_nums_2[counter]) {
                    counter++; sub_array_check--;
                }
            }
        }
        //

        if (sub_array_check > 0) {cout << "NO" << endl;}
        else {
            // Originally checked diff_nums instead of b (Bad Mistake) and then only check b if diff_nums was empty (still bad, but a little better)
            // Check Last element change or not
            long long check = 1;
            for (long long k = 0; k < b.size(); k++) {
                if (last_d == b[k]) {
                    check = 0; break;
                }
            }

            if (check == 0) {cout << "YES" << endl;}
            else {cout << "NO" << endl;}
        }

        }

    }
}