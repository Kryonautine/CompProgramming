// Codeforces Round 919 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    // Bob always makes the last x maximum elements negative.
    // So Alice is the one that determines if she should remove the k maximum elements or not.
    for (int i = 0 ; i < t ; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        int arr[n];
        int sum = 0;
        vector<int> sums;
        for (int j = 0 ; j < n ; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        sort(arr, arr+n);
        for (int j = n-1 ; j > n-1-x ; j--) {
            sum -= 2*arr[j];
        }
        sums.push_back(sum);
        for (int j = n-1-x; j > n-1-x-k; j--) {
            if (j>=0) {
                sum -= 2*arr[j];
                sum += arr[j + x];
            }
            else {
                sum += arr[j+x];
            }
            sums.push_back(sum);
        }
        sort(sums.begin(), sums.end(), greater<int>());

        cout << sums[0] << endl;
    }
}