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

void solve()
{
  string s;
  cin>>s;
  int c1=0,c0=0;
  for(int i =0;i<s.size();i++)
  {
      if(s[i]=='0')
      {
          c0++;
      }else{
          c1++;
      }
  }
  if(c1==c0)
  {
      cout<<0<<endl;
  }else{
      cout<<min(c1,c0)<<endl;
  }
}
int main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
while(_t--)
{
solve();
}
     return 0;
}