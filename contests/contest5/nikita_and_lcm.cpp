// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    for (long long i = 0 ; i < t ; i++) {
        long long n, final_length = 0;
        cin >> n;

        vector<long long> arr;
        for (long long j = 0; j < n; j++) {
            long long x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        long long max_f = 0;

        while (max_f < 1) {

            long long max_ele = arr[arr.size()-1];

            for (long long j = 0; j < arr.size(); j++) {
                if (max_ele % arr[j]) {max_f = 1; break;}
            }

            if (max_f == 0) {
                arr.pop_back();
            }

            if (arr.size() == 0) {max_f =1; break;}
        }

        final_length = arr.size();

        cout << final_length << endl;
    }
}