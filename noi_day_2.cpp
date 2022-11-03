#include <bits/stdc++.h>
#define ll long long
ll mod = (ll)(1e9 + 7);
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        priority_queue<ll, vector<ll>, greater<ll>> qe;
        ll sum = 0, n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            qe.push(x);
        }
        while (qe.size() > 1)
        {
            ll d1 = qe.top();
            qe.pop();
            ll d2 = qe.top();
            qe.pop();
            ll x = (d1 % mod + d2 % mod) % mod;
            qe.push(x);
            sum = (sum % mod + d1 % mod + d2 % mod) % mod;
        }
        cout << sum << endl;
    }
}