// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long j = 0 ; j < n ; j++) {
            cin >> arr[j];
        }
        long long count = 0;
        long long sum = arr[0];
        long long max_ele = arr[0];
        if (arr[0] == 0) {count++;}
        for (long long j = 1 ; j < n ; j++) {
            sum += arr[j];
            if (max_ele < arr[j]) {max_ele = arr[j];}
            if ((sum-max_ele)== max_ele) {count++;}
        }

        cout << count << endl;
    }
}