#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll a[], ll n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> v(1, 1e9 + 1);
        for (int i = 0; i < n; i++)
        {
            auto l = lower_bound(v.begin(), v.end(), a[i]);
            if (l != v.end())
            {
                *l = a[i];
            }
            else
                v.push_back(a[i]);
        }
        cout << n - v.size() << endl;
    }
}