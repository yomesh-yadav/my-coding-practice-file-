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

void solve()
{
    int n;cin>>n;
    int arr[n];
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn= min(mn,arr[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=arr[i]-mn;
    }
    cout<<cnt<<endl;
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