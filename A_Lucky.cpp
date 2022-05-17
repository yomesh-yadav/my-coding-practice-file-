#include <bits/stdc++.h> 

#define int long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
int mod= 1e9+7;
#define endl '\n'
using namespace std; 

void solve()
{
    string s;cin>>s;
    int ans =0;
    for(int i=0;i<s.size();i++)
    {
        if(i<3)
        {
            ans+= s[i]-'0';
        }else{
            ans-= s[i]-'0';
        }
    }
    if(ans==0)
    {
        cout<<"yes\n";
    }else{
        cout<<"no\n";
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