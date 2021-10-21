#include <bits/stdc++.h> 

#define ll long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i,a,b) for(int i = a; i<=b;i++
using namespace std; 

int main() 
{
    map<int,int>m;
    vi v;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int temp ;
        cin>>temp;
        m[temp]=i+1;
        
    }
    for(int i=1;i<=n;i++)
    {
        cout<<m[i]<<" ";
    }

     return 0;
}