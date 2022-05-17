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

int binary_exponentiation(int x, int y)
{

    // Initialize answer
    int res = 1;
    // Check till the number becomes zero
    while (y)
    {

        // If y is odd, multiply x with result
        if (y % 2 == 1)
        {

            res = ((res)%mod * (x) % mod)%mod;
        }
        y = y / 2;
        x = ((x)%mod * (x) % mod)%mod;
    }
    return res;
}

// int func(int sx, int sy, int ex, int ey)
// {
//     if (sx == ex || sy == ey)
//     {
//         return 1;
//     }
//     int ans = (func(sx + 1, sy, ex, ey) + func(sx, sy + 1, ex, ey)) % mod;
//     return ans;
// }

void solve()
{
    int n, m;
    cin >> n >> m;
    int fact[200010]={0};
    fact[0]=1;
    for(int i=1;i<200010;i++)
    {
        fact[i]= ((i)%mod*(fact[i-1])%mod)%mod;
        // cout<<fact[i]<<" ";
    }
    // m! cal
    int m_fact = (binary_exponentiation(fact[m],mod-2));
    // cout<<m_fact<<endl;
    int n_fact = binary_exponentiation(fact[n],mod-2);
    int n_m_fact = (fact[n+m])%mod;
    int ans = (n_m_fact*m_fact)%mod;
    ans= (ans*n_fact)%mod;
    cout<<ans<<endl;

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