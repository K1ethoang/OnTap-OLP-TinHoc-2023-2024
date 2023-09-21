#include <iostream>
#include <map>
using namespace std;

// http://www.laptrinhonline.club/problem/tichpxptad

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    int maxE = -1;

    for (pair<int, int> it : m)
    {
        if (it.second > (n / 2))
            maxE = max(maxE, it.first);
    }

    if (maxE == -1)
        cout << "khong co phan tu ap dao" << endl;
    else
        cout << maxE << endl;
    return 0;
}