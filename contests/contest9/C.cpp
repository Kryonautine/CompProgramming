// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

long gcd(long x, long y)
{
    if (y == 0) {return x;}
    return gcd(y, x % y);
}
 
long arr_lcm(vector<long> arr)
{
    long lcm = arr[0];
    for (long i = 1; i < arr.size(); i++) {
        long num1 = lcm;
        long num2 = arr[i];
        long gcd_val = gcd(num1, num2);
        lcm = (lcm * arr[i]) / gcd_val;
    }
    return lcm;
}
 
int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        int n;
        cin >> n;
        vector<long> k;
        for (int j = 0 ; j < n ; j++) {
            long x;
            cin >>x;
            k.push_back(x);
        }
        long lcm = arr_lcm(k);
    }
}