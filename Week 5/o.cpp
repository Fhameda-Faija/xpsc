#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        // bool fre[105];
        // for (int i = 0; i < n; ++i)
        // {
        //     fre[i] = false;
        // }
        // map<int, int> mp;
        // for (int i = 0; i < n; ++i)
        // {
        //     int d = (i + 1) - a[i];
        //     if (mp.find(d) == mp.end())
        //     {
        //         mp[d] = i;
        //     }
        //     else
        //     {
        //         swap(a[mp[d]], a[i]);
        //         mp[i+1]
        //     }
        // }
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}