#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000 + 7

int n, m;
vector<vector<pair<int, int>>> adj(1);

void input()
{
    cin >> n >> m;
    adj.resize(n + 1);

    for (int i = 1; i <= m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    input();

    return 0;
}