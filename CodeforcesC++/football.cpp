// Codeforces Beta Round 77 (Div. 2 only) :: Problem A

#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int count = 1;
    char current = s[0];

    for (int i = 1; i < s.size(); i++) {
        if (current == s[i]) {
            count++;
        }
        else {
            count = 1;
            current = s[i];
        }
        if (count > 6) {break;}
    }

    if (count > 6)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}