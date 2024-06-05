// Codeforces Round 111 (Div. 2) :: Problem A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, min_coins = 0;
    cin >> n;

    vector<int> coins;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        coins.push_back(x);
    }

    int min_price = sum / 2 + 1;

    sort(coins.begin(), coins.end(), greater<int>());
    int coins_cost = 0;
    int i = 0;

    while (coins_cost < min_price) {
        coins_cost += coins[i];
        min_coins++;
        i++;
    }

    cout << min_coins;
}