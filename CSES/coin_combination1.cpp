#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i,a,b) for(int i = a; i<=b;i++
using namespace std; 

int main() 
{
    int n,target;
    cin>>n>>target;
    int mod = 1e9+7;
    vector<int> v(n);
    for(auto &i : v) cin>>i;
    int dp[target+1]={0};
    dp[0]=1;
    for(int i =1;i<target+1;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(i-v[j]>=0)
            {
                dp[i]= (dp[i]+dp[i-v[j]])%mod;
            }
        }
    }
    cout<<dp[target];
    return 0;
}