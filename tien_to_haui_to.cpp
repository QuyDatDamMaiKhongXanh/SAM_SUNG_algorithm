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
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        stack<string> st;
        string res = "";
        for (char x : s)
        {
            if (isalpha(x))
            {
                st.push(string(1, x));
            }
            else
            {
                string tmp1 = st.top();
                st.pop();
                string tmp2 = st.top();
                st.pop();
                st.push(tmp1 + tmp2 + x);
            }
        }
        cout << st.top() << endl;
    }
}