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
        bool ok = false, ans = false;
        int id1 = -1, id2 = -1, id3 = -1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] < a[i + 1])
            {
                id1 = i;
                ok = true;
            }
            else if (a[i] > a[i + 1] && ok == true)
            {
                ans = true;
                id2 = i;
                id3 = i + 1;
                break;
            }
        }
        if (ans)
        {
            cout << "YES\n";
            cout << id1+1 << ' ' << id2+1 << ' ' << id3+1 << '\n';
        }
        else
            cout << "NO\n";
    }
    return 0;
}