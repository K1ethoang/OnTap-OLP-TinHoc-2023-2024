#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

// http://www.laptrinhonline.club/problem/tichpxlancan

int main()
{
    int n, m, res = 0;
    cin >> n >> m;

    map<int, int> m1, m2;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m1[x]++;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
    }

    for (pair<int, int> it : m1)
        res += (min(it.second, m2[it.first]));

    cout << res << endl;

    return 0;
}