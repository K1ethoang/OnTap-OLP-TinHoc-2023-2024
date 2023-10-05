#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000000 + 7

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, n;
    cin >> a >> n;

    ll sumA = 1, sumN = 1, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sumA *= (a + i);
        sumA %= MOD;
        sumN *= i;
        sumN %= MOD;
    }

    sum = sumA / sumN;

    cout << sum;

    return 0;
}