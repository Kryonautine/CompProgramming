// Codeforces Round 303 (Div. 2) :: Problem C

#include <bits/stdc++.h>
using namespace std;

#define TEN_P_5 100001

#define INF 1000000001

long long n; 
std::vector<std::pair<long long, long long>> treeData;

// 1st Roadblock vector.erase is O(n). Inside a while loop, it will be O(n*n)

// 2nd Roadblock. 2 trees can fall on the same section as long as the combined height of the trees does not exceed distance between them.
//   |------->   |---->    <--------|
//-------------------------------------

int main() {

    cin >> n;

    for (long long j = 0; j < n; j++) {
        long long x,h;
        cin >> x >> h; // Coordinates.
        treeData.push_back(make_pair(x, h));
    }
    if (n < 3) {
        cout << n << endl;
        return 0;
    }
    sort(treeData.begin(), treeData.end());
    long long count = 0;

    vector<long long> distances;
    distances.push_back(INF);
    for (long long j = 1; j < n; j++) {
        distances.push_back(treeData[j].first - treeData[j-1].first);
    }
    distances.push_back(INF);

    count++;
    long long dist_count = 0;
    long long tree_count = 0;
    distances.erase(distances.begin());
    treeData.erase(treeData.begin());


    while (tree_count < n-1) {
        if (treeData[tree_count].second < distances[dist_count]) {
            count++;
            tree_count++;
            dist_count++;
        }
        else {
            dist_count++;
            if (treeData[tree_count].second < distances[dist_count]) {
                count++;
                tree_count++;
                distances[dist_count] -= treeData[tree_count].second;
                distances[dist_count]--;
            }
            else {
                tree_count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}