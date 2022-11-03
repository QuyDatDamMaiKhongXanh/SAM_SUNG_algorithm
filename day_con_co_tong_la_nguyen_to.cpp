#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000001], b[1000001];
set<string> se;
ll nto(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
bool check(ll b[], int i)
{
    ll sum = 0;
    for (int j = 0; j <= i; j++)
        sum += b[j];
    return nto(sum);
}
void try_to(ll i, ll v)
{
    for (int j = v; j < n; j++)
    {
        b[i] = a[j];
        if (check(b, i))
        {
            string s = "";
            for (int h = i; h >= 0; h--)
                s = s + to_string(b[h]) + " ";
            se.insert(s);
        }
        try_to(i + 1, j + 1);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    while (next_permutation(a, a + n))
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}