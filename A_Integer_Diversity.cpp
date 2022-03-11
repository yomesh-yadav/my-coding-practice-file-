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
    map<int,int> mt;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        mt[a]++;
    }
    int cnt=0;
    for(auto it =mt.begin();it!=mt.end();it++)
    {
        int k =-1*(it->first);
        if(it->first==0)
        {
            cnt++;
        }else if (it->second>1 && mt.find(k)==mt.end())
        {
            cnt+=2;
        }else if (it->second>=1)
        {
            cnt++;
        }
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