// Codeforces Beta Round 89 (Div. 2) :: Problem A

#include <iostream>
using namespace std;

int main() {
    string s, s_mid = "", s_fin = "";
    cin >> s;

    // a = 97, z = 122
    // A = 65, Z = 90

    // Vowel || a = 97, e = 101, i = 105, o = 111, u = 117, y = 121

    // UnCapitalization
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 91) {s[i] += 32;}
    }
    //cout << s << endl;

    // Vowel Deletion
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] != 97) && (s[i] != 101) && (s[i] != 105) && (s[i] != 111) && (s[i] != 117) && (s[i] != 121)) {
            s_mid.push_back(s[i]);
        }
    }
    //cout << s_mid << endl;

    // Adding Dot before Consonants
    for (int i = 0; i < s_mid.size(); i++) {
        s_fin.push_back('.');
        s_fin.push_back(s_mid[i]);
    }
    cout << s_fin << endl;
}