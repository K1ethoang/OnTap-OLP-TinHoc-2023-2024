#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(const vector<int> &v, const int &mid, const int &h)
{
    ll sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mid <= v[i])
            sum += v[i] - mid;
    }

    if (sum >= h)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h;
    cin >> n >> h;

    vector<int> v(n);

    int l = 0, r = 0;

    for (auto &x : v)
    {
        cin >>
            x;
        r = max(r, x);
    }

    int res = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(v, mid, h))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << res;
    return 0;
}