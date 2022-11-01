#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    deque<ll> qe;
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        ll ok = 0;
        bool visited[1001][1001] = {0};
        memset(visited, 0, sizeof(visited));
        ll n, m;
        cin >> n >> m;
        ll a[n + 1][m + 1];
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll d[n + 1][m + 1];
        memset(d, 0, sizeof(d));
        queue<pair<ll, ll>> qe;
        qe.push({1, 1});
        visited[1][1] = 1;
        while (!qe.empty())
        {
            pair<ll, ll> p = qe.front();
            qe.pop();
            ll x = p.first;
            ll y = p.second;
            if (x == n && y == m)
            {
                ok = 1;
                break;
            }
            if (y + a[x][y] >= 1 && y + a[x][y] <= m && !visited[x][y + a[x][y]])
            {
                visited[x][y + a[x][y]] = 1;
                d[x][y + a[x][y]] = d[x][y] + 1;
                qe.push({x, y + a[x][y]});
            }
            if (x + a[x][y] >= 1 && x + a[x][y] <= n && !visited[x + a[x][y]][y])
            {
                visited[x + a[x][y]][y] = 1;
                d[x + a[x][y]][y] = d[x][y] + 1;
                qe.push({x + a[x][y], y});
            }
        }
        if (ok == 1)
        {
            cout << d[n][m] << endl;
        }
        else
            cout << -1 << endl;
    }
}