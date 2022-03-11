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

bool camp_int(int &a,int &b)
{
   return a>b;
}
void solve()
{
   int arr[10]={15,20,5,6,8,9,54,65,12,78};
   sort(arr,arr+10,camp_int);
   for(int i =0;i<10;i++)
   {
      cout<<arr[i]<<" ";
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