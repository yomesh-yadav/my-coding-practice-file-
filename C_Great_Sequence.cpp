#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define vi vector<long long>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define endl '\n'
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vi arr(n);
    if (x == 1)
    {
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        auto it = m.begin();
        int cnt = 0;
        for (; it != m.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int i = 0;
        for (int k = 0; k < (n + 1) / 2; k++)
        {
            auto it = find(arr.begin(), arr.end(), arr[i] * x);
            if (it != arr.end())
            {
                arr.erase(it);
                arr.erase(arr.begin() + i);
            }
            else
            {
                i++;
            }
        }
        cout << arr.size() << endl;
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