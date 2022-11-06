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
set<pair<ll, ll>> se;
void inp()
{
    ll n;
    cin >> n;
    cin.ignore();
    for (ll i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token2;
        while (ss >> token2)
        {
            se.insert({min(i, stoll(token2)), max(i, stoll(token2))});
        }
    }
    for (auto x : se)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    faster();
    inp();
}