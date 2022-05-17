#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
int mod = 1e9 + 7;
#define endl '\n'
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int cnt=0;
            int ci=i,cj=j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                cnt+= arr[ci][cj];
                ci--;cj--;
            }
             ci=i,cj=j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                cnt+= arr[ci][cj];
                ci--;cj++;
            } ci=i,cj=j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                cnt+= arr[ci][cj];
                ci++;cj--;
            } ci=i,cj=j;
            while(ci>=0 && ci<n && cj>=0 && cj<m)
            {
                cnt+= arr[ci][cj];
                ci++;cj++;
            }
            cnt-= 3*arr[i][j];
            mx=max(mx,cnt);
        }
    }
    cout<<mx<<endl;
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