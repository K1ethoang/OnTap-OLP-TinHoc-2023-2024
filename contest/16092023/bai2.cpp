#include <bits/stdc++.h>
using namespace std;
// http://www.laptrinhonline.club/problem/389563qd
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    bool isOk = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            isOk = true;
        else
        {
            isOk = false;
            break;
        }
    }

    if (isOk)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}