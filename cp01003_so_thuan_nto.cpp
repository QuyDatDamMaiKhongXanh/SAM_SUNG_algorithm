#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool nto(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

bool check2(ll n)
{
    ll sum = 0;
    while (n)
    {
        ll x = n % 10;
        if (x != 2 && x != 3 && x != 5 && x != 7)
            return false;
        sum += x;
        n /= 10;
    }
    if (nto(sum))
        return true;
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll cnt = 0;
        for (ll i = a; i <= b; i++)
        {
            if (check2(i) && nto(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}