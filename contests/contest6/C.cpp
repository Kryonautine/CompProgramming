// Codeforces Round 942 (Div. 2) :: Problem B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0 ; i < t ; i++) {
        long long n;
        cin >> n;
        long long m;
        cin >> m;
        vector<long long> prog_skill;
        for (long long j = 0 ; j < n + m + 1 ; j++) {
            long long a_i;
            cin >> a_i;
            prog_skill.push_back(a_i);
        }
        vector<long long> test_skill;
        for (long long j = 0 ; j < n + m + 1 ; j++) {
            long long a_i;
            cin >> a_i;
            test_skill.push_back(a_i);
        }

        vector<long long> team_skill_i;
        for (long long j = 0 ; j < n + m + 1 ; j++) {
            vector<long long> prog_i;
            vector<long long> test_i;

            long long n_i = n;
            long long m_i = m;

            for (long long k = 0; k < n + m + 1; k++) {
                prog_i.push_back(prog_skill[k]);
                test_i.push_back(test_skill[k]);
            }

            prog_i.erase(prog_i.begin() + j);
            test_i.erase(test_i.begin() + j);
            long long team_skill = 0;

            for (long long k = 0; k < n + m; k++) {
                if (prog_i[k] > test_i[k]) {
                    if (n_i > 0) {team_skill += prog_i[k]; n_i--;}
                    else {team_skill += test_i[k];}
                }
                else {
                    if (m_i > 0) {team_skill += test_i[k]; m_i--;}
                    else {team_skill += prog_i[k];}
                }
            }

            team_skill_i.push_back(team_skill);
        }

        for (long long j = 0 ; j < n + m + 1 ; j++) {
            cout << team_skill_i[j] << " ";
        }
        cout << endl;
    }
}