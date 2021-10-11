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
        // cout<<"hello";
        string s;
        cin>>s;
        vi count(3,0);
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-65]++;
        }
        // cout<<count[0]<<count[1]<<count[2];
        while (count[1] !=0 )
        {
            if((count[0]==0 && count[2] ==0))
            {
                    break;
            }
            if(count[0] != 0){
                int mn= min(count[0],count[1]);
                count[0]= count[0]-mn;
                count[1]-=mn;
            }else if(count[2] !=0)
            {
                int mn= min(count[2],count[1]);
                count[2]-=mn;
                count[1]-=mn;
            }

        }
        if(count[0] ==0 && count[1] ==0 && count[2] ==0  )
        {
            cout<<"YES"<<endl;
        }else{
            cout<<" NO "<<endl;
        }
    
        
    }
    
     return 0;
}