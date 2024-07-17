// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n;
        cin >> n;
        long arr[n];
        for (int j = 0 ; j < n ; j++) {
            cin >> arr[j];
        }
        int start = arr[0];
        int diff = -1;
        for (int j = 0 ; j < n ; j++) {
            if (arr[j] != start) {
                diff = j;
                break;
            }
        }

        if (diff == - 1) {cout << "NO" << endl;}
        else {
            cout << "YES" << endl;
            char color[n];
            for (int k = 0; k < n; k++) {
                color[k] = 'R';
            }
            if (diff != 1) {
                if (arr[0] == arr[1]) {
                    color[0] = 'B';
                }
                else {color[diff] = 'B';}
            }
            else {
                if (arr[0] == arr[2]) {
                    color[0] = 'B';
                }
                else {
                    color[1] = 'B';
                }
            }
            for (int j = 0 ; j < n ; j++) {
                cout << color[j];
            }
            cout << endl;
        }
    }
}