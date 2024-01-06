#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000 + 7

bool isBipartite(const int &u, const int &n, const vector<vector<ll>> &g)
{
    // 0: RED, 1: BLUE
    vector<short> color(n + 1, -1);
    queue<int> q;
    color[u] = 0;

    q.push(u);

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (int x : g[v])
        {
            if (color[x] == -1)
            {
                color[x] = (color[v] == 1) ? 0 : 1;
                q.push(x);
            }
            else
            {
                if (color[x] == color[v])
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    ll n, lN;
    cin >> n;

    vector<vector<ll>> g(n + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            bool x;
            cin >> x;
            if (x)
                g[i].push_back(j);
        }
    }

    cin >> lN;

    for (int i = 1; i <= n; i++)
    {
        if (isBipartite(i, n, g))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}