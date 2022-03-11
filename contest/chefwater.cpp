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
    int t;
    cin>>t;
    while(t--)
    {
        int n ,v;
        cin>>n>>v;
        int ans = ((n-1)*(n))/2;
        cout<<ans<<" "<<ans<<endl;
    }
     return 0;
}