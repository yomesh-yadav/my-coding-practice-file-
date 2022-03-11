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
    string s;
    cin >> s;
    if (n == 1 || n>=2 && s[0] == s[1])
    {
        cout << s[0] << s[0] << endl;
        return;
    }
    int i = 1;
    string ans ="";
    ans+=s[0];
    for (; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            ans += s[i];
        }else if(s[i]==s[i-1]){
            if(s[i] <= s[i-2])
            {
                ans+= s[i];
            }
        }
        else break;
        
    }
    cout<<ans;
    reverse(ans.begin(),ans.end());
    cout<<ans;
    cout<<endl;
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