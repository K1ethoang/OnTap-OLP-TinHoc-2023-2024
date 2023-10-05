#include <bits/stdc++.h>
using namespace std;
#define ll long long
// http://laptrinhonline.club/problem/261869qd

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v(3);

    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    cout << v[2] - v[0] - 2;

    return 0;
}