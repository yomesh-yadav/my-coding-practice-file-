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
    int t;cin>>t;
    while(t--)
    {
        int n,maxx;cin>>n;
        vi v;
        int freq[150001]={};
        
        for(int i =0;i<n;i++)
        {
            int temp;cin>>temp;
            v.pb(temp);
            maxx=max(maxx,temp);
            freq[temp]++;
        }
        
        int length=INT_MAX;
        int flag=0;
        for(int i=1;i<=maxx;i++)
        {
            int start,end;
            cout<<freq[i];
            if(freq[i]>1)
            {
                start=find(v.begin(),v.end(),i)-v.begin();
                end=find(v.begin()+start+1,v.end(),i)-v.begin();
                 length=min(length,start+n-end-1);
                 cout<<freq[i]<<"working\n";
            flag=1;
            }
        }
        if(flag==1)
        {

        cout<<length<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
     return 0;
}