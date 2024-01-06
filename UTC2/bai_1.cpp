#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000 + 7

int main()
{
    ll m, n, k, res = 0;
    cin >> m >> n >> k;

    // Tinh so doi co the co (khi chua tru k)
    res = ((m / 2) <= n) ? m / 2 : n;

    // Tinh so Nu va Nam con lai
    m -= res * 2;
    n -= res;

    // Tinh so BTC (lay so Nu va Nam con lai)
    k = (m + n >= k) ? 0 : (k - m - n);

    // Tinh so BTC (lay tu so doi da tinh)
    if (k != 0)
    {
        res -= k / 3;
        k %= 3;
        res = (k == 0) ? res : res - 1;
    }

    cout << res;
    return 0;
}