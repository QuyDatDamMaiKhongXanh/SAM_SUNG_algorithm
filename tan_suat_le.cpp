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
        ll n;
        cin >> n;
        ll a[n];
        for (auto &x : a)
            cin >> x;
        ll res = a[0];
        for (int i = 1; i < n; i++)
            res ^= a[i];
        cout << res << endl;
    }
}