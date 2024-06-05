
#include <bits/stdc++.h>
using namespace std;

char encode(int size, string r, char c) {
    int index = 0;
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

        string s;
        string fin = "";
        cin >> s;
        // a = 97, z = 122

        // set<char> uniq;
        // int uniq_c;

        // for (int j = 0; j < n; j++) {
        //     uniq.insert(s[j]);
        // }
        // uniq_c = uniq.size();

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
        string r = "";
        for (int j = 0; j < 26; j++) {
            if (uniq[j] > 0) {
                r.push_back(97 + j);
                uniq_c++;
            }
        }
        //cout << r << endl;
        //cout << uniq_c << endl;

        for (int j = 0; j < n; j++) {
            fin.push_back(encode(uniq_c, r, s[j]));
        }

        cout << fin << endl;
    }
}