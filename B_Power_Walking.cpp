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
    vi arr(n);
    map<int,int>mt;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        mt[arr[i]]++;;
    }
    for(int i=0;i<mt.size();i++)
    {
        cout<<mt.size()<<" ";
    }
    for(int i= mt.size();i<n;i++)
    {
        cout<<i+1<<" ";
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