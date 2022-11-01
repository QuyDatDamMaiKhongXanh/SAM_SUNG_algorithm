#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000001] = {0};
void khoitao(ll n)
{
    for (int i = 1; i <= n; i++)
        a[i] = n - i + 1;
}
void in(ll n)
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
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
    cin.ignore();
    while (t--)
    {
        ll n;
        cin >> n;
        khoitao(n);
        in(n);
        while (prev_permutation(a + 1, a + n + 1))
        {
            in(n);
        }
        cout << endl;
        memset(a, 0, sizeof(a));
    }
}