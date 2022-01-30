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
     int n ,flag=0;
     cin>>n;
     int x,y;
     cin>>x;
     int x_vec[x];
     bool res[n+1]={false};
     for (int i = 0; i < x; i++)
     {
          /* code */
          cin>>x_vec[i];
          res[x_vec[i]]=true;
     }
     
     cin>>y;
     int y_vec[y];
      for (int i = 0; i < y; i++)
     {
          /* code */
          cin>>y_vec[i];
          res[y_vec[i]]=true;
     }
    for(int i =1;i<n+1;i++)
    {
     //     cout<<res[i];
         if(res[i]==0)
         {
              flag=1;
              cout<<"Oh, my keyboard!";
          break;
         }
    }
    
     if(flag==0){
     cout<<"I become the guy.";
     }
     return 0;
}