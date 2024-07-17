// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int arr[3];

        cin >> arr[0] >> arr[1] >> arr[2];

        for (int j = 0; j < 5; j++) {
            sort(arr, arr+3);
            arr[0]++;
        }

        cout << arr[0] * arr[1] * arr[2] << endl;
    }
}