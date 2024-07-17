// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long h, n;
        cin >> h >> n;
        long damage[n], cooldown[n], counter[n];
        for (int j = 0 ; j < n ; j++) {
            cin >> damage[j];
        }
        for (int j = 0 ; j < n ; j++) {
            cin >> cooldown[j];
            counter[j] = 0;
        }
        long turns = 0;

        while (h > 0) {
            turns++;
            for (int j = 0 ; j < n ; j++) {
                if (counter[j] == 0) {
                    h -= damage[j];
                    counter[j] += cooldown[j];
                }
                counter[j]--;
            }
        }
        
        cout << turns << endl;
    }
}