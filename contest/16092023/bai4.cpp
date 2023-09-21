#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/241352qd
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    int x;
    while (cin >> x)
        v.push_back(x);

    int n = v.size();

    int a1 = 0;
    int index_a1 = 0;
    int d = 0;

    for (int i = 0; i < n; i++)
    {
        if (a1 == 0)
        {
            if (v[i] != 0)
            {
                index_a1 = i;
                a1 = v[i];
            }
        }
        else
        {
            if (v[i] != 0)
            {
                d = (v[i] - a1) / (i - index_a1);
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a1 + d * (i - index_a1) << " ";

    return 0;
}