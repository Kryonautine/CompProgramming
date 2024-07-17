// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n, k;

        cin >> n >> k;
        int arr[k];
        for (int j = 0 ; j < k ; j++) {
            cin >> arr[j];
        }

        sort(arr, arr+k);

        long long ans = (n - arr[k-1]) * 2 - k + 1;
        cout << ans << endl;
    }
}