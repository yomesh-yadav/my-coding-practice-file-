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
          string val;
          cin>>s>>val;
          
          map<int,int> m;
          for(int i=0;i<s.size();i++)
          {
               m[s[i]]=i+1;
          }
          
          int sum=0;
          for(int i =0;i<val.size()-1;i++)
          {
               sum+= abs(m[val[i]]-m[val[i+1]]);
          }
          cout<<sum<<endl;
     }
     return 0;
}