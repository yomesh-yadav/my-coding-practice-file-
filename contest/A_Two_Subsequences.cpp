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
        string s;
        cin>>s;
        int mn = INT_MAX;
        int mn_index = -1;
        int i;
        for( i=0;i<s.size();i++)
        {
            if(s[i]<mn)
            {
                mn=s[i];
                mn_index=i;
             
            }
        }
        cout<<char(mn)<<" ";
        s.erase(s.begin()+mn_index);
        cout<<s<<endl;
    }
     return 0;
}