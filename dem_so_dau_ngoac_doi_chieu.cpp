#include <bits/stdc++.h>
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
        stack<char> st;
        string s;
        cin >> s;
        int cnt = 0, cnt2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else
                {
                    st.push(')');
                    cnt++;
                }
            }
        }
        cout << st.size() / 2 + cnt << endl;
    }
}