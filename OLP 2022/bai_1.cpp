#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000000 + 7

bool ok(string s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int t, k;
    cin >> t;

    vector<int> v;

    while (t--)
    {
        cin >> k;
        v.resize(k);

        set<string> st;

        for (auto &x : v)
            cin >> x;

        int cnt = 0;

        for (const int &x : v)
        {
            for (int j = 0; j < s.size(); j++)
            {
                string subS = s.substr(j, x);
                st.insert(subS);
            }
        }

        for (const string &x : st)
            cout << x << endl;

        if (cnt == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        v.clear();
    }

    return 0;
}