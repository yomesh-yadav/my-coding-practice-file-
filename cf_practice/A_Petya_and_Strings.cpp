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
    string s1;
    string s2;
    cin>>s1>>s2;
    int f1=0,f2=0;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    for(int i =0;i<s1.size();i++)
    {
        if(s1[i]<s2[i])
        {
            f1=1;
            cout<<-1;
            break;
        }else if(s1[i]>s2[i])
        {
            f2=1;
            cout<<1;
            break;
        }
    }
    if(f1==0 && f2==0)
    {
        cout<<0;
    }

     return 0;
}