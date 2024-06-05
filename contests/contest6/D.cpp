// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        string s;
        cin >> s;

        long n = s.size();
        vector<long> arr;
        vector<long> cul_arr;

        for (long j = 1 ; j < n-1; j++) {
            if (s[j] == '(') {
                arr.push_back(1);
                if (j == 1) {cul_arr.push_back(1);}
                else {cul_arr.push_back(cul_arr[cul_arr.size() - 1] + 1);}
            }
            else {
                arr.push_back(-1);
                if (j == 1) {cul_arr.push_back(-1);}
                else {cul_arr.push_back(cul_arr[cul_arr.size() - 1] - 1);}
            }
        }

        long count = 0;
        long c = 0, d = 0;

        for (long j = 0; j < n-2; j++) {
            if (cul_arr[j] == 0) {c++;}
            if (cul_arr[j] == 1) {d++;}
        }

        count += (c*(c+1))/2;
        d--;
        count += (d * (d+1))/2;
        
        cout << count << endl;

    }
}