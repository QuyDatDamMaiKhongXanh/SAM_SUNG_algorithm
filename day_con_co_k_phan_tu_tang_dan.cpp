#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1000001], b[1000001];
void try_to(int i, int v)
{
    for (int j = v; j < n; j++)
    {
        b[i] = a[j];
        if (i == k - 1)
        {
            for (int h = 0; h < k; h++)
                cout << b[h] << " ";
            cout << endl;
        }
        else
            try_to(i + 1, j + 1);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        try_to(0, 0);
    }
}