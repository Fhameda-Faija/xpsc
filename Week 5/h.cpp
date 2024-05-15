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
    // sort(a, a + n);
    int sum = 0;
    int neg = 0;
    for (int i = 0; i < n; ++i)
    {
      if (a[i] < 0)
      {
        neg++;
        a[i] = -a[i];
      }
      sum += a[i];
    }
    sort(a, a + n);
    if (neg % 2)
    {
      sum -= (2 * a[0]);
    }
    cout << sum << '\n';
  }
  return 0;
}