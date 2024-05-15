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
        string s1, s2;
        cin >> s1 >> s2;
        vector<string> v1, v2;
        int n = s1.size();
        int m = s2.size();
        for (int i = 0; i < (1 << n); ++i)
        {
            string str = "";
            for (int j = 0; j < n; ++j)
            {
                if ((i >> j) & 1)
                {
                    str += s1[j];
                }
            }
            v1.push_back(str);
        }
        for (int i = 0; i < (1 << m); ++i)
        {
            string str = "";
            for (int j = 0; j < n; ++j)
            {
                if ((i >> j) & 1)
                {
                    str += s2[j];
                }
            }
            v2.push_back(str);
        }
        int mx = 0;
        for (int i = 0; i < v1.size(); ++i)
        {
            for (int j = 0; j < v2.size(); ++j)
            {
                if (v1[i] == v2[j])
                {
                    mx = max((int)v1[i].size(), mx);
                }
            }
        }
        cout << m + n - (2 * mx) << '\n';
    }
    return 0;
}