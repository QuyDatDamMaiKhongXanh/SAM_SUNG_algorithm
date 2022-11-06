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
void hcnmax()
{
    stack<ll> st;
    ll n;
    cin >> n;
    ll a[n];
    ll ans = INT_MIN;
    for (auto &x : a)
        cin >> x;
    ll i = 0;
    while (i < n)
    {
        if (st.empty() || a[i] >= a[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            while (!st.empty() && a[i] < a[st.top()])
            {
                ll top = st.top();
                st.pop();
                if (st.empty())
                {
                    ans = max(ans, i * a[top]);
                }
                else
                {
                    ans = max(ans, (i - st.top() - 1) * a[top]);
                }
            }
            st.push(i);
        }
    }
    while (!st.empty())
    {
        ll top = st.top();
        st.pop();
        if (st.empty())
        {
            ans = max(ans, i * a[top]);
        }
        else
        {
            ans = max(ans, (i - st.top() - 1) * a[top]);
        }
    }
    cout << ans << endl;
}
int main()
{
    faster();
    ll t;
    cin >> t;
    while (t--)
    {
        hcnmax();
    }
}