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
    ll int n,k;
     cin>>n>>k;
     ll div = (n+1)/2;
     if(k<=div)
     {
          cout<<1LL*(2*k-1);
     }else{
          cout<<2*(k-((n+1)/2));
     }
     return 0;
}