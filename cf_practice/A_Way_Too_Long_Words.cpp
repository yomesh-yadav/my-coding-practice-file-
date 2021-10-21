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
    int n ;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int si=s.size();
        if(si<=10)
        {
            cout<<s<<endl;
        }else{
            cout<<s[0]<<si-2<<s[si-1]<<endl;
        }
    }
     return 0;
}