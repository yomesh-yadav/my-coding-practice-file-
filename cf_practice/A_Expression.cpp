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
     int a,b,c;
     cin>>a>>b>>c;
     int v1,v2,v3,v4;
     v1= a+b*c;
     int vn=a+b+c;
     int vnew= a*b+c;
     v2=(a+b)*c;
     v3=a*(b+c);
     v4=a*b*c;
     cout<<max(v1,max(v2,max(v3,max(v4,max(vn,vnew)))));
     return 0;
}