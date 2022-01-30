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
    int n,m,a,b,x,y=0;
    cin>>n>>m>>a>>b;
    
if(a*m<=b)
{
    cout<<a*n<<endl;
}
else{
    cout<< (n/m)*b+ min((n%m)*a,b);
}
     return 0;
}