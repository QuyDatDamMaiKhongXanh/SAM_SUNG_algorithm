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
        ll sum1 = 0, sum2 = 0;
        ll a[n];
        for (auto &x : a)
            cin >> x;
        for (auto x : a)
        {
            sum1 += x;
            if (sum1 < 0)
                sum1 = 0;
            sum2 = max(sum1, sum2);
        }
        cout << sum2 << endl;
    }
}