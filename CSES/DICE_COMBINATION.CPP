#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define pb push_back
#define F first
#define S second
#define MP Make_pair
#define rep(i, a, b) for(int i = a; i<=b;i++
using namespace std;

int main()
{
    int m = 1e9 + 7;
    int n;
    cin >> n;
    int arr[n + 1];
    arr[0] = 1;
    vi c = {1, 2, 3, 4, 5, 6};
    
    for (int i = 1; i <= n; i++)
    {int ans = 0;
        for (auto j : c)
        {
            if (i - j >= 0)
            {
                ans += arr[i - j];
                ans %= m;
            }
        }
        arr[i]=ans;
    }
    cout<<arr[n];

    return 0;
}