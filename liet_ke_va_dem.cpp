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
map<ll, ll> mp;
bool check(ll n)
{
    while (n)
    {
        ll r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7)
            return false;
        n = n / 10;
    }
    return true;
}
vector<ll> v;
int main()
{
    faster();
    ll a;
    while (cin >> a)
    {
        if (check(a))
        {
            auto it = find(v.begin(), v.end(), a);
            if (it == v.end())
            {
                v.push_back(a);
            }
            mp[a]++;
        }
    }
    for (auto x : v)
    {
        cout << x << " " << mp[x] << endl;
    }
}