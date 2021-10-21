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
    int n;
    cin>>n;
    vi v;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int r= accumulate(v.begin(),v.end(),0);
    int i=n-1,sum=0,count=0;
   for(int i= n-1;i>=0;i--)
   {
       sum+=v[i];
       count++;
       if(sum>r/2)
       {
           break;
       }
   }
cout<<count;
     return 0;
}