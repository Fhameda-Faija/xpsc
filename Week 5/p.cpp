#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int j = 0; j < m; ++j)
    {
        cin >> b[j];
    }
    sort(a, a + n);
    sort(b, b + m);
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (abs(a[i] - b[j]) <= 1)
            {
                ans++;
                b[j] = INT_MAX;
                break;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}