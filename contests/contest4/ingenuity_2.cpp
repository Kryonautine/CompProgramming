#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int n = 0, s = 0, e = 0, w = 0;
        for (int j = 0; j < n; j++) {
            if(s[j] = 'N') {n++;}
            if(s[j] = 'S') {s++;}
            if(s[j] = 'E') {e++;}
            if(s[j] = 'W') {w++;}
        }
        int v = n-s, h = w-e;
        if ((v % 2 != 0) || (w % 2 != 0)) {cout << "NO" << endl;}
        else {

        }
    }
}