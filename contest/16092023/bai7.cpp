#include <bits/stdc++.h>
using namespace std;

// cách tối ưu hơn

int power_team(int a, int b) // (1+2+3...)*thanh vien
{
    return (a + b) * (b - a + 1) / 2 * (b - a + 1);
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
        int x, n;
        cin >> x >> n;

        int min = x, max = x + n - 1;
        int l = min, r = max;

        while (l < r)
        {
            int mid = (l + r) / 2;
            if (power_team(min, mid) < power_team(mid + 1, max))
                l = mid + 1;
            else
                r = mid;
        }

        cout << l - x + 1 << endl;
    }

    return 0;
}