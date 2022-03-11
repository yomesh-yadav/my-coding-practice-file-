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
    int n;cin>>n;
    int k=n;
    vi v;
    for(int i=0;i<n;i++)
    {
        v.push_back(k);
        k--;
    }
    int m=n/2+1;
    sort(v.begin(),v.begin()+m);
    int cnt=0;
    do {
        if(cnt==n)
        {
            break;
        }
        for(int i =0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cnt++;

		
	} while (next_permutation(v.begin(), v.begin() +m ));
    if(n==3)
    {
        cout<<3<<" "<<1<<" "<<2<<endl;
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