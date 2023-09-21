#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/tichpxtrinhtham
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    multiset<int> ms;

    for (int &x : v)
        cin >> x;

    for (int i = 0; i < k; i++)
        ms.insert(v[i]);

    for (int i = k; i < n; i++)
    {
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(v[i - k]));
        ms.insert(v[i]);
    }
    cout << *ms.rbegin() << " ";
    return 0;
}