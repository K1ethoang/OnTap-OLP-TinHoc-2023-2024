#include <bits/stdc++.h>
using namespace std;
// http://laptrinhonline.club/problem/874361qd
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const string B_WIN = "BLUE";
    const string R_WIN = "RED";
    const string DRAW = "DRAW";

    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> w >> h;
        int xB, yB, xR, yR;
        char c;
        cin >> xB >> yB >> c;

        xR = xB;
        yR = yB;

        int hB = 0, hR = 0, wB = 0, wR = 0;

        if (c == 'U')
        {
            yR--;
            hB = h - yB + 1;
            hR = yR;
        }
        else if (c == 'D')
        {
            yR++;
            hB = yB;
            hR = h - yR + 1;
        }
        else if (c == 'L')
        {
            xR--;
            wR = xR;
            wB = w - xB + 1;
        }
        else
        {
            xR++;
            wB = xB;
            wR = w - xR + 1;
        }

        if (wB > wR || hB > hR)
            cout << B_WIN;
        else if (wB < wR || hB < hR)
            cout << R_WIN;
        else
            cout << DRAW;

        cout
            << endl;
    }

    return 0;
}