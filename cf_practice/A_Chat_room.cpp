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
    string x;
    cin>>x;
    string y="hello";
    int n= x.size();
    int m= 5;
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        dp[i][0]=0;
    }
for(int i=0;i<m+1;i++)
{
    dp[0][i]=0;
}
for(int i=1;i<n+1;i++)
{
    for(int j=1;j<m+1;j++)
    {
        if(x[i-1]==y[j-1])
        {
            dp[i][j]= 1+dp[i-1][j-1];
        }else{
            dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }
    }
}
if(dp[n][m]==5)
{
    cout<<"YES";
}else
{
    cout<<"NO";
}

     return 0;
}