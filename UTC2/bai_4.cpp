#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000 + 9

int main()
{
    ll n, l, res = 0;
    cin >> n >> l;

    while (n >= 0)
    {
        res += (l * l);
        l *= 2;
        n--;
        l %= MOD;
        res %= MOD;
    }
    cout << res;
    return 0;
}