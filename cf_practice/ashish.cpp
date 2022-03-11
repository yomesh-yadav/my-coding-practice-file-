#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define endl '\n'
using namespace std;

void solve()
{
    int n ,m;
    cin>>n>>m;
    int arr[m];
    for(int i =0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int j=m-1,ans=INT_MAX;
    for(int i=m-n;i>=0;i--)
    {
            ans= min(arr[j]-arr[i],ans);
            j--;
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;
    // cin >> _t;
    // while (_t--)
    // {
        solve();
    // }
    return 0;
}