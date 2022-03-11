#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define input        \
    for (auto c : v) \
        cin >> c;
using namespace std;

void solve()
{
    int hc, dc, hm, dm, k, w, a;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    int flag = 0;
    for (int i = 0; i <= k; i++)
    {
        int val1 =( hc+a*i+dm-1)/dm;
        int val2 = (hm+dc+(k-i)*w-1)/(dc+(k-i)*w);
        // cout<<val1<<" "<<val2<<endl;
        if (val1 >= val2)
        {
            cout << "YES\n";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "NO\n";
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