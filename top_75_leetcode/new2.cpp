#include <bits/stdc++.h> 

#define int long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
int mod= 1e9+7;
#define endl '\n'
using namespace std; 
int freq[1000100]={0};
void solve()
{
        int n,d;
        cin>>n>>d;
        int arr[n],mx=0;
        for(int i=0;i<n;i++){cin>>arr[i];
        mx=max(arr[i],mx);
        }
        int head =0,tail=0,ans=INT_MAX,cnt=0;
        while (tail<=n-d)
        {
               while (head-tail+1<=d )
               {
                       if(freq[arr[head]]==0)cnt++;
                       freq[arr[head]]++;
                       head++;
               }
               
               ans= min(ans,cnt);
               freq[arr[tail]]--;
               if(freq[arr[tail]]==0)cnt--;
               tail++;
               if(tail>head){
                       tail++;
                       head=tail-1;
               }
               
        }
        cout<<ans<<endl;
        // cout<<"hello\n";
        for(int i =0;i<n;i++)
        {
                while (freq[arr[i]])
                {
                        /* code */
                freq[arr[i]]--;
                }
                // if(freq[arr[i]]>0)cout<<i<<endl;
                
        }
        // cout<<"hello\n";

        
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
while(_t--)
{
solve();
}
         return 0;
}