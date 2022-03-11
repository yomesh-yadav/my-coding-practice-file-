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
    int n, l;
    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < l; i++)
    {
        int cnt[2];
        cnt[1] = 0, cnt[0] = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] & (1 << i))
            {
                cnt[1]++;
            }
            else
            {
                cnt[0]++;
            }
        }
            int val;
            if (cnt[1] > cnt[0])
            {
                val = 1;
            }
            else
            {
                val = 0;
            }
            ans |= val * (1 << i);
        // cout<<ans<<endl;
    }
    cout << ans << endl;
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