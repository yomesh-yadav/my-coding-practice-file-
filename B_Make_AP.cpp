#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define input for(auto c : v) cin>>c;
using namespace std; 

int main() 
{
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        int val1,val2,val3;
        val1=(2*b-a)%c  ; 
        val2=(a+c)%(2*b);
        val3=(2*b-c)%a;
        if(val1==0||val2==0||val3==0)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }    
        
    }
     return 0;
}