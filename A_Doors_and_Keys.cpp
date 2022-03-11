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
    string s;
    // vector<pair<int,int>> v;
    cin>>s;
    int k1 = find(s.begin(),s.end(),'r')-find(s.begin(),s.end(),'R');
    int k2 = find(s.begin(),s.end(),'g')-find(s.begin(),s.end(),'G');
    int k3 = find(s.begin(),s.end(),'b')-find(s.begin(),s.end(),'B');
    // cout<<k1<<" "<<k2<<" "<<k3<<endl;
    if(k1>0 || k2>0 ||k3>0)
    {
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
while(_t--)
{
solve();
}
     return 0;
}