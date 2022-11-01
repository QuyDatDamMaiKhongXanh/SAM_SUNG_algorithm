#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
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
        stack<string> st;
        string s;
        cin >> s;
        reverse(all(s));
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                st.push(string(1, s[i]));
            }
            else
            {
                string top1 = st.top();
                st.pop();
                string top2 = st.top();
                st.pop();
                st.push("(" + top1 + string(1, s[i]) + top2 + ")");
            }
        }
        cout << st.top() << endl;
    }
}