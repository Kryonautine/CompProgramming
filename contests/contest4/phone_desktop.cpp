
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int screen_size = 15, y_size = 4, x_size = 1;
        int x, y, screen_count = 0, empty_space = 0;
        cin >> x >> y;

        screen_count = y/2;
        if (y % 2 != 0) {screen_count+=1;}
        empty_space = screen_count*screen_size - y*y_size;

        if (x > empty_space) {
            int rem_space = x - empty_space;
            screen_count += rem_space/15;
            if (rem_space % 15 != 0) {screen_count+=1;}
        }
        cout << screen_count << endl;
    }
}