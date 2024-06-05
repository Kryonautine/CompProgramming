// Educational Codeforces Round 140 (Rated for Div. 2) :: Problem A

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    for (long long i = 0; i < t; i++) {
        long long x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if (x1 == x2) {
            if (y2 == y3) {cout << "NO"; continue;}
            if (y1 == y3) {cout << "NO"; continue;}
        }
        if (x2 == x3) {
            if (y2 == y1) {cout << "NO"; continue;}
            if (y3 == y1) {cout << "NO"; continue;}
        }
        if (x1 == x3) {
            if (y1 == y2) {cout << "NO"; continue;}
            if (y3 == y2) {cout << "NO"; continue;}
        }
        cout << "YES"; continue;
    }
}