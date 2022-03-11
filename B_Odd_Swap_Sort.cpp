#include <bits/stdc++.h>

#define int long long int
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define mod 1e9 + 7
#define endl '\n'
using namespace std;

bool is_sort(vi s)
{
    int n = s.size();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n ;
    int arr[n];
    vi even_arr;
    vi odd_arr;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2)
        {
            odd_arr.push_back(arr[i]);
        }else{
            even_arr.push_back(arr[i]);
        }

    }
    if(is_sort(odd_arr) && is_sort(even_arr))
    {
        cout<<"Yes\n";
    }else{
        cout<<"NO\n";
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