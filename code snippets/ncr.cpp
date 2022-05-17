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


int inv(int n)
{
       int ans =1;
       int y=mod-2;
       n=n%mod;
       while (y)
       {
              if(y%2==1)
              {
                     ans =(ans*n)%mod;  
              }
              n=(n*n)%mod;
              y/=2;
       }
       return ans ;
       
}
int ncr(int n,int r)
{
    if(n<r)
    {
        return 0;
    }
    if(r==0) return 1;
       int fact[100];
       fact[0]=1;
       for(int i=1;i<=100;i++)
       {
              fact[i]=(i*fact[i-1])%mod;
       }
       return (((fact[n]*inv(fact[r]))%mod*inv(fact[n-r]))%mod)%mod;
}

void solve()
{
       int n=5,r=2;
       cout<<ncr(n,r)<<endl;
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
// int _t;cin>>_t;
// while(_t--)
{
solve();
}
        return 0;
}