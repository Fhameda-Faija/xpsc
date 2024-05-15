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
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; ++i)
    {
      b[i] = i + 1 + a[i];
    }
    sort(b, b + n);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
      if (b[i] <= c)
      {
        cnt++;
        c -= b[i];
      }
    }
    cout << cnt << '\n';
  }
  return 0;
}