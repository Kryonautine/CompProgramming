
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        long long beautiful = 0;

        // int tupe_arr[n-2][3];
        // for (int j = 0; j < n-2; j++) {
        //     for (int k = 0; k < 3; k++) {
        //         tupe_arr[j][k] = arr[j + k];
        //     }
        // }

        for (int j = 0; j < n-2; j++) {
            for (int k = 0; k < j; k++) {
                if (((arr[j] != arr[k]) && (arr[j+1] == arr[k+1]) && (arr[j+2] == arr[k+2]))
                || ((arr[j] == arr[k]) && (arr[j+1] != arr[k+1]) && (arr[j+2] == arr[k+2]))
                || ((arr[j] == arr[k]) && (arr[j+1] == arr[k+1]) && (arr[j+2] != arr[k+2]))
                ) {beautiful++;}
            }
        }

        cout << beautiful << endl;
    }
}