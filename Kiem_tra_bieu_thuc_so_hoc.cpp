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
        ll ok = 0;
        string s;
        getline(cin, s);
        stack<char> st;
        ll cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-')
                cnt++;
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (!st.empty() && s[i] == ')')
            {
                st.pop();
                cnt--;
            }
        }
        if (cnt == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}