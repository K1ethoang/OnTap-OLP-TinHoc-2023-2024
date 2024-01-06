#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000 + 7

int main()
{
    // Hết cách nên em dùng vét cạn ạ
    ll n;
    cin >> n;

    vector<vector<ll>> vll(n, vector<ll>(11, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
            cin >> vll[i][j];
    }

    ll best = 0;

    vector<ll> ind = {0, 1, 2};

    for (int i = 0; i < 11; i++)
    {
        best += max({vll[ind[0]][i], vll[ind[1]][i], vll[ind[2]][i]});
    }
    cout << best << endl;

    for (int i = 3; i < n; i++)
    {
        ll sumM1 = 0, sumM2 = 0, sumM3 = 0;

        for (int j = 0; j < 11; j++)
        {
            sumM1 += max({vll[i][j], vll[ind[1]][j], vll[ind[2]][j]});
            sumM2 += max({vll[ind[0]][j], vll[i][j], vll[ind[2]][j]});
            sumM3 += max({vll[ind[0]][j], vll[ind[1]][j], vll[i][j]});
        }

        if (sumM1 > best)
        {
            ind[0] = i;
            best = sumM1;
        }
        else if (sumM2 > best)
        {
            ind[1] = i;
            best = sumM2;
        }
        else if (sumM3 > best)
        {
            ind[2] = i;
            best = sumM3;
        }
    }

    cout << best;
    return 0;
}