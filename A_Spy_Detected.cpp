#include <bits/stdc++.h> 

#define int long long
#define ull unsigned long long
#define vi  vector<int> 
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9+7
#define endl '\n'
using namespace std; 

void solve()
{
    int n ;cin>>n;
    vi v(n);
    cin>>v[0];
    int ele=v[0],an;
    int cnt[2];
    cnt[0]=0,cnt[1]=0;
    set<int > s;
    s.insert(v[0]);
    for(int i =1;i<n;i++)
    {
        cin>>v[i];
        // if(v[i]==ele)
        // {
        //     cnt[0]++;
        // }else{
        //     cnt[1]++;
        //     an=v[i];
        // }
        s.insert(v[i]);
    }
    auto it = s.begin();
    int n1 = count(v.begin(),v.end(),*it);it++;
    int n2 = count(v.begin(),v.end(),*it);
    if(n2==1)
    {
        int id = find(v.begin(),v.end(),*it)-v.begin();
        cout<<id+1<<endl;
    }else{
        it--;
         int id = find(v.begin(),v.end(),*it)-v.begin();
        cout<<id+1<<endl;
    }

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