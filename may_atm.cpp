#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, ok = 0, res = int(1e9), s, a[1000001] = {0};
void back_track(ll cnt, ll sum, ll begin)
{
    if (sum == s)
    {
        res = min(res, cnt);
        ok = 1;
    }
    else
    {
        for (int i = begin; i < n; i++)
        {
            if (sum + a[i] <= s)
            {
                back_track(cnt + 1, sum + a[i], i + 1);
            }
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        back_track(0, 0, 0);
        if (ok == 1)
            cout << res << endl;
        else
            cout << -1 << endl;
        ok = 0;
        res = (int)1e9;
        memset(a, 0, sizeof(a));
    }
}