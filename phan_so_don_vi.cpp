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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        while (true)
        {
            if (b % a == 0)
            {
                cout << a << "/" << b << endl;
                break;
            }
            else
            {
                ll res = b / a + 1;
                cout << 1 << "/" << res << " + ";
                a = a * res - b;
                b = res * b;
            }
        }
    }
}