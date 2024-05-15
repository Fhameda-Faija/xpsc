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
        string s;
        cin>>s;
        map<char,int>mp;
        int n = s.size();
        for(int i = 0;i<n; ++i){
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto [x,y]:mp){
            if(y>=2){
                cnt++;
            }
        }
        //cout<<cnt<<'\n';
        if(cnt>1)cout<<"YES\n";
        else cout<<"NO\n";
    }
  return 0;
}