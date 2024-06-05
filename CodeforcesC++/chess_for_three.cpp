// Codeforces Round 945 (Div. 2) :: Problem A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        // Need to find maximum possible draws
        vector<int> arr;
        int draws = 0;
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        arr.push_back(p1);arr.push_back(p2);arr.push_back(p3);

        int tot = p1 + p2 + p3;

        // Can't have combined odd number of points.
        if (tot % 2) {cout << "-1" << endl;}
        else {
            sort(arr.begin(), arr.end());
            // If player 3 wins more than rest, he draws every game with other players and wins rest.
            if (arr[2] >= arr[0] + arr[1]) {cout << arr[0] + arr[1] << endl;}
            // If player 3 doesn't, every game can end in a draw.
            else {
                cout << (arr[0] + arr[1] + arr[2])/ 2 << endl;
            }
        }

    }
}