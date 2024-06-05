#include <bits/stdc++.h>
using namespace std;

char encode(int size, char r[], char c) {
    int index;
    for (int i = 0; i < size; i++) {
        if (r[i] == c) {
            index = i;
            break;
        }
    }
    return r[size - index - 1];
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        char s[n];
        char fin[n];
        cin >> s;
        // a = 97, z = 122

        int uniq[26];
        for (int j = 0; j < 26; j++) {
            uniq[j] = 0;
        }
        for (int j = 0; j < n; j++) {
            int charac = s[j] - 97;
            //cout << s[j] << "|" << charac << endl;
            uniq[charac] += 1;
        }

        int uniq_c = 0;
        for (int j = 0; j < 26; j++) {
            if (uniq[j] > 0) {
                uniq_c++;
            }
        }
        char r[uniq_c]; int index = 0;
        for (int j = 0; j < 26; j++) {
            if (uniq[j] > 0) {
                r[index] = (97 + j);
                index++;
            }
        }
        r[uniq_c] = '\0';
        //cout << r << endl;
        //cout << uniq_c << endl;

        for (int j = 0; j < n; j++) {
            fin[j] = encode(uniq_c, r, s[j]);
        }
        fin[n] = '\0';

        cout << fin << endl;
    }
}