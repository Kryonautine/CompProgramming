// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;
        vector<long long> primes;
        long long prime_num = -1;
        vector<long long> prime_count;
        // k = MULT(for i in primes, primes[i]**prime_count[i])

        /// Finding prime factors of k
        long long sqrtk = (long long) sqrt((double) k) + 1;
        long long k2 = k;
        for (long long j = 2; j <= sqrtk; j++){
            if (k2 == 1) {break;}
            if (k2 % j == 0) {
                primes.push_back(j);
                prime_num++;
                prime_count.push_back(0);
            }
            /// Finding powers of each prime factor to get k.
            while (k2 % j == 0) {
                prime_count[prime_num]++;
                k2 /= j;
            }
        }

        if (primes.empty()) {
            primes.push_back(k);
            prime_num++;
            prime_count.push_back(1);
        }

        // PRINT PRIMES
        for (long long j = 0; j < primes.size(); j++){
            for (long long k = 0; k < prime_count[j]; k++){
                cout << primes[j] << " ";
            }
        }
        cout << endl;

        /// Finding all combinations of factors.

        /// Summing number of ways for each possible combination.

    }
}