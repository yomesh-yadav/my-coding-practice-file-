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
    int a[]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n ;
    cin>>n;
    bool flag=false;
    for(auto i :a)
    {
        if(n%i==0)
        {
            cout<<"YES";
            flag=true;
            break;
        }
    }
    if(!flag)
    {

    cout<<"NO";
    }
     return 0;
}