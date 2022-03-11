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
    int n ,k;cin>>n>>k;
    string s;cin>>s;
    int start=0,end=n-1;
   int flag=0;
    while(start<end)
    {
        if(s[start] != s[end])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
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