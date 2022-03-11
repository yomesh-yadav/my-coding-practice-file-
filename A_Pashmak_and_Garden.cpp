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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1!=x2 && y1!=y2 && abs(x1-x2)!= abs(y1-y2))
    {
        cout<<-1;
    }else if(x1==x2)
    {
        cout<< x1+abs(y1-y2)<<" "<<y1<<" "<<x1+abs(y1-y2)<<" "<<y2;
    }else if(y1==y2)
    {
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y1+abs(x1-x2);
    }else{
        // cout<<"test3";
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
    
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
// int _t;cin>>_t;
// while(_t--)
// {
solve();
// }
     return 0;
}