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
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = 1e18, ans = 0;
    while (l <= r)
    {
      int mid = l + (r - l) / 2;
      int s = 0;
      for (int i = 0; i < n; ++i)
      {
        if (mid > v[i])
        {
          s += (mid - v[i]);
        }
      }
      if (s <= w)
      {
        ans = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
