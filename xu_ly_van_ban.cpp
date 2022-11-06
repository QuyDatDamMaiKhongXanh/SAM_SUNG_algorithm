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
void lower(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}
int main()
{
    string s;
    bool ok = true;
    while (cin >> s)
    {
        lower(s);
        if (ok)
        {
            s[0] = toupper(s[0]);
            ok = false;
        }
        if (s.back() == '.' || s.back() == '?' || s.back() == '!')
        {
            s.pop_back();
            ok = true;
            cout << s;
            cout << endl;
        }
        else
            cout << s << " ";
    }
}