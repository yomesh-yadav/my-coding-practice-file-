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
    int n,k;cin>>n>>k;
    int m =0;
    if(n-2*(k-1)>0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==2*m && j==2*m && m<k)
                {
                    cout<<"R";
                    m++;
                }else{
                    cout<<".";
                }
            }
            cout<<endl;
        }
    }else{
        cout<<-1<<endl;
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