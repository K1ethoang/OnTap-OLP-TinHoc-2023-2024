#include <bits/stdc++.h>
using namespace std;

// http://www.laptrinhonline.club/problem/tichpxongnuoc

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    long long res = 0, sum = 0, time = 0;

    while (!pq.empty())
    {
        if (time == k)
        {
            time = 0;
            pq.push(sum);
            res += sum;
            sum = 0;
            continue;
        }
        sum += pq.top();
        pq.pop();
        time++;
    }

    res += sum;

    cout << res << endl;
    return 0;
}