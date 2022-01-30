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
          string s;
          cin>>s;
          if(s.size() == 1)
          {
               cout<<s<<endl;
          }else{
               s[0]=s.back();
               cout<<s<<endl;
          }
     }
     return 0;
}