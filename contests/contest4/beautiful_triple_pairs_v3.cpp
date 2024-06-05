
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

        for (int j = 0; j < n-2; j++) {
            for (int k = j; k < n-2; k++) {
                if (((arr[j] != arr[k]) && (arr[j+1] == arr[k+1]) && (arr[j+2] == arr[k+2]))
                || ((arr[j] == arr[k]) && (arr[j+1] != arr[k+1]) && (arr[j+2] == arr[k+2]))
                || ((arr[j] == arr[k]) && (arr[j+1] == arr[k+1]) && (arr[j+2] != arr[k+2]))
                ) {beautiful++;}
            }
        }

        cout << beautiful << endl;
    }
}