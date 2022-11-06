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
ll n, k;
ll a[1000001] = {0};
bool check()
{
    for (ll i = 1; i <= k; i++)
    {
        if (a[i] != i)
            return false;
    }
    return true;
}

void sinh()
{
    ll cnt = k;
    while (cnt >= 2 && a[cnt] == a[cnt - 1] + 1)
    {
        cnt--;
    }
    a[cnt]--;
    if (a[k] != n)
    {
        for (ll j = cnt + 1; j <= k; j++)
        {
            a[j] += 1;
        }
    }
}

int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (ll i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        if (check())
        {
            for (int i = 1; i <= k; i++)
            {
                cout << n - k + i << " ";
            }
            cout << endl;
        }
        else
        {
            sinh();
            for (int i = 1; i <= k; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        ms(a);
    }
}