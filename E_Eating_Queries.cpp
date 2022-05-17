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
    int n,q;cin>>n>>q;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n,greater<int>());
for(int i=1;i<n;i++)
{
    arr[i]=arr[i-1]+arr[i];
}
while (q--)
{
    int val ;cin>>val;
    int pos = lower_bound(arr,arr+n,val)-arr+1;
    if(pos==n+1)
    {
        cout<<-1<<endl;
    }else{
        cout<<pos<<endl;
    }
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