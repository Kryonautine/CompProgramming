// Codeforces Beta Round 1 :: Problem A

# include <iostream>
using namespace std;

int main() {
    long long n, m, a;

    cin >> n >> m >> a;

    long long n_rem = n % a;
    long long m_rem = m % a;
    long long n_f = n, m_f = m;
    if (n_rem != 0) {n_f = n + a - n_rem;}
    if (m_rem != 0) {m_f = m + a - m_rem;}
    // Find largest multiple of a greater than n,m. Use this to find tiles.

    long long tot = (n_f * m_f) / (a * a);
    if (tot < 1) {tot = 1;}

    cout << tot;
}