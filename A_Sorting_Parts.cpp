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
    int n ;cin>>n;
    int arr[n];
    int mx= INT_MIN;
    int mine=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i<=n-2)
        {
            mx= max(mx,arr[i]);
        }
        if(i>=1)
        {
            mine= min(mine,arr[i]);
        }
    }
    if(mx>arr[n-1] || mine < arr[0])
    {
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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