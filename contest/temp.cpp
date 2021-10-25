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
    int t;
    cin>>t;
    while(t--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        d=0-d;
        l=d+l;
        r=d+r;
        if(l>0)
        {
            cout<<"Too Early\n";
        }else if(r<0)
        {
            cout<<"Too Late\n";
        }else{
            cout<<"Take second dose now\n";
        }
    }
     return 0;
}