#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define endl '\n'
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if(k==0)
    {
        for(int i =0;i<n/2;i++)
        {
            cout<<i<<" "<<n-1-i<<endl;
        }
    }else if (k<n-1)
    {
        cout<<0<<" "<<n-1-k<<endl;
        cout<<k<<" "<<n-1<<endl;
        for(int i=1;i<n/2;i++)
        {
            if(i==k || i== n-1-k)
            {   
                continue;
            }else{
                cout<<i<<" "<<n-1-i<<endl;
            }
        }

    }else if (k==n-1 && k>=8)
    {
        cout<<0<<" "<<2<<endl;
        cout<<n-3<<" "<<1<<endl;
        cout<<n-1<<" "<<n-2<<endl;
        for(int i=3;i<n/2;i++)
        {
            cout<<i<<" "<<n-1-i<<endl;
        }
    }else{
        cout<<-1<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
    {
        solve();
    }
    return 0;
}