#include <bits/stdc++.h> 

#define int long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define endl '\n'
using namespace std; 

void solve()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> p;
    for(int i =0;i<n;i++)
    {
        int t1,t2;cin>>t1>>t2;
        p.push_back({t1,t2});
    }
    // int flag=0;
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)
    {
        if(s<=p[i].first)
        {
            cout<<"NO\n";
            
            return;
        }else{
            s+=p[i].second;
        }
    }
    cout<<"YES\n";
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
// int _t;cin>>_t;
// while(_t--)
// {
solve();
// }
     return 0;
}