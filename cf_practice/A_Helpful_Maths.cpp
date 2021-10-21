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
    string s;
    cin>>s;
    vector<char>v(3,0);
    for(int i =0;i<s.size();i=i+2)
    {
        v[s[i]-'1']++;
    }
   int i =0;
    while(i<3)
    {
        while(v[i]>0)
        {
            cout<<v[i]<<"+";
        }


    }
     return 0;
}