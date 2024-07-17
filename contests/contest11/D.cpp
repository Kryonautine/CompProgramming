// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n, m;
        cin >> n >>  m;
        char arr[n][m];
        int x_f, y_f, x_l, y_l;
        int first = 0;
        for (int j = 0 ; j < n ; j++) {
            for (int k = 0 ; k < m ; k++) {
                cin >> arr[j][k];
                if (arr[j][k] == '#') {
                    if (first == 0) {x_f = j; y_f = k;first++;}
                    x_l = j; y_f = k;
                }
            }
        }
        cout << (x_f + (x_l - x_f)/2) + 1 << " " << y_f + 1 << endl;
        // for (int j = 0 ; j < n ; j++) {
        //     for (int k = 0 ; k < m ; k++) {
        //         cout << arr[j][k];
        //     }
        //     cout << endl;
        // }
    }
}