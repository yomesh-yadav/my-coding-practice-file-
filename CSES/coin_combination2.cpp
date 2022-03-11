#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair

#define input for(auto c : v) cin>>c
using namespace std; 


int main() 
{   
    int mod = 1e9+7;
    int n ,x;
    cin>>n>>x;
    vi v(n);
    input;
    int dp[n+1][x+1]={0};
    for(int i=0;i<x+1;i++)
    {
        dp[0][i]=0;
    }
    for(int i =0;i<n+1;i++)
    {
        dp[i][0]=1;
    }
    int ans=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j =1;j<x+1;j++)
        {   
            dp[i][j]=dp[i-1][j];
            if(j-v[i-1]>=0)
            {

            dp[i][j]=(dp[i][j]+dp[i][j-v[i-1]]);
            }
        }
    }
    for(int i=0;i<n+1;i++)
    {
        for(int j =0;j<x+1;j++)
        {
                cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][x];
     return 0;
}