#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        if(n==s || b==s) cout<<"YES\n";
        else{
            int c = s/n;
            int d = min(c,a)*n;
            int e = s-d;
            if(e<=b)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
  return 0;
}