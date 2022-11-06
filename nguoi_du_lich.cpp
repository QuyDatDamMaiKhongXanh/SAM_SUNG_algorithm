#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll c[1001][1001], MIN, n, res = (int)1e9, x[100001] = {0};
bool visited[1000001] = {0};
void back_track(ll i, ll sum)
{
    for (int j = 1; j <= n; j++)
    {
        if (!visited[j])
        {
            x[i] = j;
            visited[j] = true;
            sum += c[j][x[i - 1]];
            if (i == n)
            {
                sum += c[x[i]][1];
                res = min(res, sum);
            }
            if (sum + (n - i + 1) * MIN < res)
                back_track(i + 1, sum);
            visited[j] = false;
            sum -= c[j][x[i - 1]];
        }
    }
}

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            MIN = min(MIN, c[i][j]);
        }
    }
}

int main()
{
    init();
    visited[1] = true;
    x[1] = 1;
    back_track(2, 0);
    cout << res << endl;
}