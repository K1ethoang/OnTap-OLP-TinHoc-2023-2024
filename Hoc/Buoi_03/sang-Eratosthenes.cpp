#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(1e6, 1);

    v[0] = v[1] = 0;

    for (int i = 2; i <= sqrt(1e6); i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1e6; j += i)
                v[j] = 0;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int res = 0;

        for (int i = l; i <= r; i++)
        {
            if (v[i])
                res++;
        }

        cout << res << endl;
    }

    return 0;
}