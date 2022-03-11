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
        int n ;
        cin>>n;
        vector<ll> v;
        for(int i =0;i<n;i++)
        {
            ll temp ;
            cin>>temp;
            v.push_back(temp);
        }
       int mx= *max_element(v.begin(),v.end());
       int index= find(v.begin(),v.end(),mx)-v.begin();
       cout<<mx-(index+1)<<endl;
       
    }
     return 0;
}