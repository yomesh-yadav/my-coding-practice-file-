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
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          ll arr[n];
          ll sum=0;
          for(int i =0;i<n;i++)
          {
               cin>>arr[i];
               sum+=arr[i];
          }
          ll dp[n+1][sum+1];
           for(int i =0;i<sum+1;i++)
          {
               dp[0][i]=0;
          }
         for(int i =0;i<n+1;i++)
         {
              dp[i][0]=1;
         }
         
          for(int i=1;i<n+1;i++)
          {
               for(int j=1;j<sum+1;j++)
               {
                    if(arr[i-1]<=j)
                    {
                         dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                    }else{
                         dp[i][j]=dp[i-1][j];
                    }
               }
          }
          cout<<dp[n][sum-1]<<endl;
     }
     return 0;
}