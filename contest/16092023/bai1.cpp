#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/467865qd
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v(9);

    bool isOk = true;

    for (int i = 0; i < 9; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < 9; i++)
    {
        if (v[i] == i + 1)
            isOk = true;
        else
        {
            isOk = false;
            break;
        }
    }

    if (isOk)
        cout << "VALID";
    else
        cout << "INVALID";
    return 0;
}