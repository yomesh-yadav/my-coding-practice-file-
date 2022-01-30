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
    int n,m;
    cin>>n>>m;
    int mn = min(n,m);
    if(mn%2==0)
    {
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
     return 0;
     
}