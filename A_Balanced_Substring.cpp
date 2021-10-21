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
    while (t--)
    {
        string s;
        int num;
        cin>>num;
        cin>>s;
        int i=0,j=1;
        int flag=0;
        while (i<num-1)
        {
           if(s[i] != s[j])
           {
               cout<<i<<" "<<j<<"\n";
                flag=1;
               break;
           }
           i++;
           j++;
        }
        if(flag==0)
        {
            cout<<-1<<" "<<-1<<"\n";
        }
    }
    
     return 0;
}