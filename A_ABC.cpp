#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define input for(auto c : v) cin>>c;
using namespace std; 

void solve()
{
    int n ;cin>>n;
    string s;
    cin>>s;
    if(n>=3)
    {
        cout<<"NO\n";
    }else if(n==2){
        if(s[0]==s[1])
        {
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }else{
        cout<<"YES\n";
    }
}
int main() 
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