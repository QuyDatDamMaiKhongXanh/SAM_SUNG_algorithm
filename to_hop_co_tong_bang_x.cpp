#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000001] = {0}, b[1000001] = {0}, s, n, cnt = 0;
vector<string> v;
void back_track(ll sum, ll pos, ll k)
{
    if (sum == s)
    {
        cnt++;
        string tam = "[";
        for (int i = 0; i < k; i++)
        {
            if (i != k - 1)
            {
                tam += to_string(b[i]) + " ";
            }
            else
                tam += to_string(b[i]) + "]";
        }
        v.push_back(tam);
    }
    for (int i = pos; i < n; i++)
    {
        if (sum + a[i] <= s)
        {
            b[k] = a[i];
            back_track(sum + a[i], i, k + 1);
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        back_track(0, 0, 0);
        if (cnt == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto x : v)
            {
                cout << x;
            }
        }
        cout << endl;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
    }
}