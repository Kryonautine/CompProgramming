// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int a[100], b[100];

    for (int i = 0; i < 100; i ++) {
        a[i] = x ^ (i+1);
        b[i] = y ^ (i+1);
    }

    for (int i = 0; i < 100; i ++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout<< "------------------------" << endl;
    cout << endl;
    for (int i = 0; i < 100; i ++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout<< "------------------------" << endl;
    cout << endl;
    for (int i = 0; i < 100; i ++) {
        cout << (a[i] ^ b[i]) << " ";
    }
    cout << endl;
}