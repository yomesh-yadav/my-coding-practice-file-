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
    int n,m;cin>>n>>m;
    vector<string> vec;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        vec.push_back(s);
    }
    int mn =INT_MAX;
    for(int i=0;i<n;i++)
    {
        int temp=INT_MAX;
        for(int j=i+1;j<n;j++)
        {
            int d=0;
            for(int k=0;k<m;k++)
            {
                d+=abs(vec[i][k]-vec[j][k]);
            }
            temp=min(temp,d);
        }
        mn=min(temp,mn);
    }
    cout<<mn<<endl;
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