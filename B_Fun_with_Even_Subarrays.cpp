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
    int  n;cin>>n;
    int arr[n];
    
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
        return ;
    }
    int k=1,opt=0;
    while(n-2*k>=0)
    {
        for(int i= n-2*k,j=n-k;i<n-k;i++,j++)
        {
            if(arr[i]!=arr[j])
            {
                opt++;
                break;
            }
        }
        k*= 2;
        // cout<<k<<" \n";
    }
    // cout<<k<<"new"<<endl;
    if((n-(k))==0)
    {
        // cout<<"##1"<<endl;
        cout<<opt<<endl;
    }else{
        for(int i=0,j=n+k;i<n+k;i++,j++)
        {
            if(arr[i]!=arr[j])
            {

        cout<<"##2"<<endl;
        cout<<opt+1<<endl;
        return;
            }
        }
        cout<<"##3"<<endl;

        cout<<opt<<endl;

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