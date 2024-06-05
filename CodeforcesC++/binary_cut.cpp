// Codeforces Round 944 (Div. 4) :: Problem D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        string s;
        cin >> s;
        char last = s[0];
        int count = 1, ol=0, lo=0;

        // All ...10.. must be cut. ..11.. and ..00.. can exist freely. There can only be one ...01....

        for (int j = 0 ; j < s.size() ; j++) {
            if ((last == '0') && (s[j] == '1')) {ol++;}
            if ((last == '1') && (s[j] == '0')) {lo++;}
            last = s[j];
        }

        if (ol < 2) {count = lo+1;}
        else {count = ol + lo;}

        cout << count << endl;
    }
}