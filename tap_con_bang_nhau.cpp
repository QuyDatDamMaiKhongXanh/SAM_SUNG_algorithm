#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[1000001] = {0};
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        cin >> n;
        ll a[n];
        for (auto &x : a)
        {
            cin >> x;
            sum += x;
        }
        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            f[0] = 1;
            sum /= 2;
            for (int i = 0; i < n; i++)
            {
                for (int j = sum; j >= a[i]; j--)
                {
                    if (f[j - a[i]])
                        f[j] = 1;
                }
            }
            if (f[sum])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}