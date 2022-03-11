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
    int a,b;
    cin>>a>>b;
    int x[11],y[11];
  
    for(int i=0;i<11;i++)
    {
        if(a&(1<<i))
       {
           x[i]=1;
       }else{
           x[i]=0;
       }
        
    }
    for(int i=0;i<11;i++)
    {   
       if(b&(1<<i))
       {
           y[i]=1;
       }else{
           y[i]=0;
       }
        
    }
    int ans=0;
    for(int i=0;i<11;i++)
    {
        ans+= (x[i]|y[i])*(1<<i);
        

    }
  
    cout<<ans;
   

     return 0;
}