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
    while (t--)
    {
        int n ,maxx=INT_MIN;cin>>n;
        int arr[n];
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            maxx=max(maxx,arr[i]);
        }int ans=INT_MIN;
         for(int i =0;i<n;i++)
        {
           ans= max(maxx-arr[i],ans);
        }
        cout<<ans<<endl;
    }
    
     return 0;
}