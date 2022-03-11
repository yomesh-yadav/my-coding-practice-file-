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
    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > brr[i])
        {
            int temp = arr[i];
            arr[i] = brr[i];
            brr[i] = temp;
        }
    }
    int max_a = INT_MIN, max_b = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_a = max(max_a, arr[i]);
        max_b = max(max_b, brr[i]);
    }
    cout<<max_a*max_b<<endl;
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