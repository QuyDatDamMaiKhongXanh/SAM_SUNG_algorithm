#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define ms(a) memset(a, 0, sizeof(a))
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}
int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), cmp);
        ll last = v[0].second;
        ll cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first < last)
                continue;
            last = v[i].second;
            cnt++;
        }
        cout << cnt << "\n";
    }
}