#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<int> se1, se2;
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (auto &x : a)
    {
        cin >> x;
        se1.insert(x);
    }
    for (auto &x : b)
        cin >> x;
    for (auto x : b)
    {
        if (se1.count(x))
        {
            se2.insert(x);
        }
    }
    for (auto x : se2)
        cout << x << " ";
}