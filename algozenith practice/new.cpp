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

void solve(int num)
{
    int arr[] = {18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392,14605 };
        int ans=0;
    int n=21;
 vector<int> right(n, 0);
    for(int i=n-2; i>=0; i--) {
        int mx = max(right[i+1], arr[i+1]);
        if(mx>arr[i]) right[i]=mx;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<right[i]<<" ";
    }
    cout<<endl;
    int mn[n];
    mn[n-1]=arr[n-1];
    for(int i=n-2;i>=1;i--)
    {
        mn[i]= max(arr[i+1],mn[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<mn[i]<<" ";
    }
    
    
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
int i=1;
while(_t--)
{
solve(i);
i++;
}
     return 0;
}