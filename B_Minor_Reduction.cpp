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
    string s;cin>>s;
    string ans1,ans2;
    int n = s.size();
    for(int i=n-1;i>0;i--)
    {
        int c1=stoi(string(1,s[i]));
        int c2=stoi(string(1, s[i-1]));
        if( c1+c2 >=10)
        {
            ans1=s.substr(0,i-1);
            ans2=s.substr(i+1,n);
            cout<<ans1<<c1+c2<<ans2<<endl;
            return;
        }
    }
    string ans3= s.substr(0,n-2);
    int c1=stoi(string(1,s[n-1]));
    int c2= stoi(string(1,s[n-2]));
    cout<<ans3<<c1+c2<<endl;
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