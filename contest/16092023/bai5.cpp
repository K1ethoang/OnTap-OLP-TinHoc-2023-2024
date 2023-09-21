#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/312758qd
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> v1(n), v2(n);

    for (int &x : v1)
        cin >> x;
    for (int &x : v2)
        cin >> x;

    int maxS = 0, minS = 0;

    for (int i = 0; i < n; i++)
    {
        maxS += max(v1[i], v2[i]);
        minS += min(v1[i], v2[i]);
    }

    cout << maxS - minS;

    return 0;
}