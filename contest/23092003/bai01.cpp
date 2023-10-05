#include <bits/stdc++.h>
using namespace std;
#define ll long long
// http://laptrinhonline.club/problem/849272qd

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    float count = 0, nAnswer = s1.size();

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            count++;
            if (s2[i] == 'O')
                nAnswer--;
        }
    }

    float res = count / nAnswer * 10;

    cout << setprecision(1) << fixed << res << endl;

    return 0;
}