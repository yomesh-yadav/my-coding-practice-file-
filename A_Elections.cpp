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
        set<int> s;
        ll arr[3], mx = INT_MIN, count_mx = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
            mx = max(mx, arr[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == mx)
            {
                count_mx++;
            }
        }
        if (s.size() == 1)
        {
            cout << 1 << " " << 1 << " " << 1 << "\n";
        }
        else
        {
            if (count_mx == 2)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (arr[i] == mx)
                    {
                        cout << 1 << " ";
                    }
                    else
                    {
                        cout << mx - arr[i] + 1 << " ";
                    }
                }
                cout<<"\n";
            }
            else
            {
                for (int i = 0; i < 3; i++)
                {
                    if (arr[i] == mx)
                    {
                        cout << 0 << " ";
                    }
                    else
                    {
                        cout << mx - arr[i] + 1 << " ";
                    }
                }
                cout << "\n";
            }
        }
    }

    return 0;
}