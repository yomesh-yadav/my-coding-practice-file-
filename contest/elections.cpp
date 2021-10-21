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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vi count(3, 0);
        for (int i = 0; i < s.size(); i++)
        {
            count[s[i] - 65]++;
        }
        int n= s.size();
        if(n%2==0)
        {
                if(count[1]==n/2)
        {
            cout<<"yes"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        }else{
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}