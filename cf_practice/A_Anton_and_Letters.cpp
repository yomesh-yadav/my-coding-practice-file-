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
     string s;
     getline(cin,s);
     set<char> res;
     int n = s.size();
   
     for(int i =1;i<n-1;i=i+3)
     {
     res.insert(s[i]);
     }
     cout<<res.size();
     return 0;
}