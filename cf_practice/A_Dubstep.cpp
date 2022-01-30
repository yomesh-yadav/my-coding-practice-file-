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
        string s;
        cin >> s;
        int n = s.size();
        vector<char> res;
        for (int i = 0; i < n; i++)
        {
                if (i + 3 <= n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
                {
                        while (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
                        {
                                i += 3;
                        }
                        res.push_back(' ');
                        i--;
                }else{
                        res.push_back(s[i]);
                }
        }
        if(res[0]==' ')
        {
                for(int i=1;i<res.size();i++)
                {
                        cout<<res[i];
                }
        }else{
                for(int i=0;i<res.size();i++)
                {
                        cout<<res[i];
                }
        }
        return 0;
}