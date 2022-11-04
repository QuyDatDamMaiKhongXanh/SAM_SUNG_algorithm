#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        ll dp[n];
        dp[0] = s[0] - '0';
        for (int i = 1; i < n; i++)
        {
            dp[i] = dp[i - 1] * 10 + (i + 1) * (s[i] - '0');
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += dp[i];
        }
        cout << sum << endl;
    }
}
