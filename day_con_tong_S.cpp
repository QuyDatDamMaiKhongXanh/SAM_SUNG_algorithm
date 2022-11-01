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
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (auto &x : a)
            cin >> x;
        ll f[k + 1] = {0};
        f[0] = 1;
        for (ll i = 0; i < n; i++)
        {
            for (int j = k; j >= a[i]; j--)
            {
                if (f[j - a[i]] == 1)
                {
                    f[j] = 1;
                }
            }
        }
        if (f[k])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}