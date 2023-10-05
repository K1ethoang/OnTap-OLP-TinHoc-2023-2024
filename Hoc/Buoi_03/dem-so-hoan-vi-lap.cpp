#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long power(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long temp = power(a, b / 2);
    if (b % 2 == 1)
        return (a % mod * temp % mod * temp % mod) % mod;
    return (temp % mod * temp % mod) % mod;
}

long long C(int n, int k)
{
    long long res = 1;
    for (int i = 1; i <= k; i++, n--)
    {
        res = (res * n) % mod * power(i, mod - 2);
        res %= mod;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        map<char, int> mp;
        for (auto &x : s)
            mp[x]++;

        long long res = 1;
        int k = s.size();

        for (auto it : mp)
        {
            res *= C(k, it.second);
            k -= it.second;
            res %= mod;
        }

        cout << res << endl;
    }

    return 0;
}