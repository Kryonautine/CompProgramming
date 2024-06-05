// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        vector<long long> arr1;
        for (long long j = 0; j < n; j++) {
            long long x;
            cin >> x;
            arr1.push_back(x);
        }
        vector<long long> arr2;
        for (long long j = 0; j < n + 1; j++) {
            long long x;
            cin >> x;
            arr2.push_back(x);
        }

        long long transitions = 0;
        long long append = 0;
        for (long long j = 0; j < n; j++) {
            if (arr1[j] > arr2[j]) {transitions += arr1[j] - arr2[j];}
            else {transitions += arr2[j] - arr1[j];}
        }

        long long end = arr2[n];
        long long diff = 1000000000;

        for (long long j = 0; j < n; j++) {
            if ((arr1[j] >= end) && ((arr1[j] - end) < diff)) {
                diff = arr1[j] - end;
            }
            if ((arr1[j] < end) && ((end - arr1[j]) < diff)) {
                diff = end - arr1[j];
            }
            if ((arr1[j] >= arr2[j]) && (end > arr2[j]) && (end < arr1[j])) {
                append = 0; diff = 0; break;
            }
            if ((arr1[j] < arr2[j]) && (end < arr2[j]) && (end > arr1[j])) {
                append = 0; diff = 0; break;
            }
        }

        append = diff + 1;

        cout << transitions + append << endl;
    }
}