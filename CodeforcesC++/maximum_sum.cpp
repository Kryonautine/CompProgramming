
// DOES NOT WORK
#include <bits/stdc++.h>
using namespace std;

#define MODULO 1000000007

int main() {

    long long t;
    cin >> t;

    for (long long i = 0; i < t; i++) {
        long long n, k;
        cin >> n >> k;

        long long a[n];

        for (long long j = 0; j < n; j++) {
            cin >> a[j];
        }

        vector<long long> pos;
        vector<long long> neg;
        vector<long long> pos_pow;
        vector<long long> neg_pow;
        long long pos_created = 0;
        long long neg_created = 0;

        for (long long j = 0; j < n; j++) {
            if (a[j] >= 0) {
                if (pos_created == 0) {
                    neg_created = 0;
                    pos_created = 1;
                    pos.push_back(a[j]);
                    pos_pow.push_back(0);
                }
                else {
                    pos[pos.size() - 1]+=a[j];
                    pos[pos.size() - 1] %= MODULO;
                    pos_pow[pos.size() - 1]++;
                }
            }
            else {
                if (neg_created == 0) {
                    pos_created = 0;
                    neg_created = 1;
                    neg.push_back(a[j]);
                    neg_pow.push_back(0);
                }
                else {
                    neg[neg.size() - 1] += a[j];
                    if (neg[neg.size() - 1] <= (-MODULO)) {
                        neg[neg.size() - 1] += MODULO;
                    }
                    neg_pow[neg.size() - 1]++;
                }
            }
        }

        if (pos.size() == 0) {
            cout << neg[0] << endl;
            continue;
        }

        if (pos.size() == 1) {
            long long sum = pos[0];
            for (long long j = 0; j < k; j++) {
                sum*=2;
                sum%=MODULO;
            }
            cout << sum << endl;
            continue;
        }
        
        long long sum = 0;
        for (long long j = 0; j < n; j++) {
            sum += a[j];
            sum %= MODULO;
        }

        long long pos_counter = 0;
        long long neg_counter = 0;
        if (a[0] >= 0) {
            // Merge
            if ()

            // Find Max
            long long extra = 0;

            // Calculate ending
            sum -= extra;
            sum%=MODULO;
            for (long long j = 0; j < k; j++) {
                extra*=2;
                extra%=MODULO;
            }
            sum += extra;
            sum%=MODULO;
            cout << sum << endl;
            continue;
        }
        else {

        }
    }
}