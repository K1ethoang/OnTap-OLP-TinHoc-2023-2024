#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/197031vh
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(7);

    for (int &x : v)
        cin >> x;

    int a, b, c;
    a = v[6] - v[5];
    b = v[6] - v[4];
    c = v[6] - a - b;

    if (a == v[0] && b == v[1] && (c == v[2] || c == v[3]) && a + b == v[2] + v[3] - c)
        cout << a << " " << b << " " << c;
    else
        cout << -1;
    return 0;
}