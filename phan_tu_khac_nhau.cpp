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
        ll b[n];
        ll c[n - 1];
        for (auto &x : b)
            cin >> x;
        for (auto &x : c)
            cin >> x;
        ll ok = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] != c[i])
            {
                cout << i + 1 << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            cout << n << endl;
    }
}