#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000001], b[1000001];
vector<string> c;
ll nto(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
bool check(ll b[], int i)
{
    ll sum = 0;
    for (int j = 0; j <= i; j++)
        sum += b[j];
    return nto(sum);
}
void try_to(ll i, ll v)
{
    for (int j = 0; j < 2; j++)
    {
        b[i] = j;
        if (i == n - 1)
        {
            ll sum = 0;
            for (int k = 0; k < n; k++)
            {
                if (b[k])
                    sum += a[k];
            }
            if (nto(sum))
            {
                for (int k = 0; k < n; k++)
                {
                    if (b[k])
                    {
                        cout << a[k] << " ";
                    }
                }
                cout << endl;
            }
        }
        else
            try_to(i + 1, v);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        try_to(0, 0);
        c.clear();
    }
}