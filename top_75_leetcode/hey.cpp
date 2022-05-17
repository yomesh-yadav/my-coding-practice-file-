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

void solve(vector<int> &arrive, vector<int> &depart, int K)
{
        vector<pair<int,int>> m;
    for(int i=0;i<arrive.size();i++)
    {
        m.push_back({arrive[i],depart[i]});
    }
    sort(m.begin(),m.end());
    int mx= INT_MIN,required_room;
    int n = m.size();
    for(int i=0;i<n-1;i++)
    {
        required_room=1;
        int next = i++;
        if((m[i].second) > (m[next].first))
        {
            while(next < n &&(m[next].first)<(m[i].second) )
            {
                required_room++;
                next++;
            }
        }
        mx=max(mx,required_room);
        if(required_room >K)
        {
            cout<< false;
            return;
        }
    }
    cout<< true;
}
signed main() 
{
 ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int _t;cin>>_t;
while(_t--)
{
    vi a={1,3,5};
    vi b= {2,6,8};
    int c=1;
solve(a,b,c);
}
     return 0;
}