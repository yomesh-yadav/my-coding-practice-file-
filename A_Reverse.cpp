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
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=(i+1))
       {
           search= find(arr,arr+n,i+1)-arr;
           reverse(arr+i,arr+search+1);
           break;
       }
   }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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