#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i, a, b) for(int i = a; i<=b;i++
using namespace std;



int main()
{
    int sum, n;
    cin >> n >> sum;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dp[n + 1][sum + 1];
    memset(dp, -1, sizeof(dp));
    for (int j = 1; j <= sum; j++)
    {
        dp[0][j] = INT_MAX - 1;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 1; j <= sum; j++)
    {
        if (j % a[0] == 0)
        {
            dp[1][j] = j / a[0];
        }
        else
        {
            dp[1][j] = INT_MAX - 1;
        }
    }
    for(int i =2;i<=n;i++)
    {
        for(int j =1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]= min(1+dp[i][j-a[i-1]],dp[i-1][j]);
            }else{
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]==INT_MAX-1)
    {
        cout<<-1;
    }else
    {
        cout<<dp[n][sum];

    }
    
    


    return 0;
}