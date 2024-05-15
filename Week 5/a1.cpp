#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                ok = true;
                break;
            }
            if (a[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}