#include <bits/stdc++.h>
#define ll long long
const ll mod = (ll)1e9 + 7;
#define endl "\n"
#define all(v) v.begin(), v.end()
#define ms(a) memset(a, 0, sizeof(a))
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    faster();
    ll n;
    cin >> n;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    ll pos;
    ll cnt = 0;

    cout << "Buoc 0: " << a[0] << " " << endl;
    for (int i = 1; i < n; i++)
    {
        ll x = a[i];
        for (pos = i; pos > 0 && (a[pos - 1] > x); pos--)
        {
            a[pos] = a[pos - 1];
        }
        a[pos] = x;
        cnt++;
        cout << "Buoc " << cnt << ": ";
        for (int k = 0; k <= i; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}