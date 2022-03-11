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
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    if(y1-y2==0 && y1>0  && y3<y1)
    {
        // float d = 
        cout<< fixed<<setprecision(9)<<float(abs(x1-x2))<<endl;
        
    }else if(y2-y3==0&& y2>0  && y1<y2){
        
        // float d = sqrt( (x2-x3)^2+ (y3-y2)^2);
        cout<< fixed<<setprecision(9)<<float(abs(x2-x3))<<endl;

    }else if(y3-y1==0 && y3>0&& y2<y1)
    {
        // float d = sqrt( (x1-x3)^2+ (y1-y3)^2);
        cout<< fixed<<setprecision(9)<<float(abs(x1-x3))<<endl;

    }else{
        cout<<fixed<<setprecision(9)<<float(0)<<endl;
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