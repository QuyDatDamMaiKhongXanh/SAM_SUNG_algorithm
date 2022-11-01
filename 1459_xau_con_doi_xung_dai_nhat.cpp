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
        if (s.size() == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int n = s.size(), res = 1;
            s = " " + s;
            bool f[1001][1001];
            memset(f, 0, sizeof(f));
            for (int i = 1; i <= n; i++)
            {
                f[i][i] = true;
            }
            for (int k = 2; k <= n; k++)
            {
                for (int i = 1; i <= n - k + 1; i++)
                {
                    int j = i + k - 1;
                    if (k == 2)
                    {
                        if (s[i] == s[j])
                            f[i][j] = true;
                    }
                    else
                    {
                        f[i][j] = f[i + 1][j - 1] && s[i] == s[j];
                    }
                    if (f[i][j])
                    {
                        res = max(res, j - i + 1);
                    }
                }
            }
            cout << res << endl;
        }
    }
}