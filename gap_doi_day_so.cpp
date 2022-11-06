#include <bits/stdc++.h>
#define ll long long
const ll mod = (ll)1e9 + 7;
using namespace std;
ll pow_mod(ll n, ll k)
{
    ll res = 1;
    while (k)
    {
        if (k % 2 == 1)
        {
            res *= n;
        }
        n *= n;
        k /= 2;
    }
    return res;
}
ll gap_doi_day_so(ll n, ll k)
{
    ll res = pow_mod(2, n - 1);
    if (k == res)
        return n;
    else
    {
        if (k < res)
            return gap_doi_day_so(n - 1, k);
        else
            return gap_doi_day_so(n - 1, k - res);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << gap_doi_day_so(n, k) << endl;
    }
}