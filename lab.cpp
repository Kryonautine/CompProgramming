#include <bits/stdc++.h>

using namespace std;

// vector
// push_back
vector<int> adj[10001];
// stack
// queue
// priority queue

int N, M;

int main()
{
	
	cin >> N >> M;
	int cnt=0;
	for(int i=0;i<M;i++) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);

	int all_visited = true;
	for(int i=1)

	return 0;
}